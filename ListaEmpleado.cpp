#include "ListaEmpleado.h"




ListaEmpleado::ListaEmpleado()
{
    primero = NULL;
    actual = NULL;
}


ListaEmpleado::~ListaEmpleado(){}

void ListaEmpleado::insertarEmpleado(Empleado* empleado)
{
    actual = primero;
    if (Empleado* e = dynamic_cast<Empleado*>(empleado)) {
       
        if (Tripulantes* t = dynamic_cast<Tripulantes*>(e)) {
            
            if (Piloto* p = dynamic_cast<Piloto*>(t)) {
                
                NodoEmpleado* nuevo = new NodoEmpleado(empleado,NULL);
                if (primero == NULL)
                {
                    primero = nuevo;
                }
                else
                {
                    actual = primero;
                    while (actual->getSig() != NULL)
                    {
                        actual = actual->getSig();
                    }
                    actual->setSig(nuevo);
                }
				
            }
			else{
					cout<<"No se puede insertar"<<endl;
				}
			}
			else if (Copiloto* c = dynamic_cast<Copiloto*>(t)) {
                
				if (dynamic_cast<aCarga*>(t->getAvion()) != nullptr || dynamic_cast<aComerciales*>(t->getAvion()) != nullptr) {
                    NodoEmpleado* nuevo = new NodoEmpleado(empleado,NULL);
                    if (primero == NULL)
                    {
                        primero = nuevo;
                    }
                    else
                    {
                        actual = primero;
                        while (actual->getSig() != NULL)
                        {
                            actual = actual->getSig();
                        }
                        actual->setSig(nuevo);
                    }
                }
				else{
					cout<<"No se puede insertar"<<endl;
				}
            } else if (Azafata* a = dynamic_cast<Azafata*>(t)) {
            
                if (aComerciales* ac = dynamic_cast<aComerciales*>(t->getAvion())) {
                    
                    NodoEmpleado* nuevo = new NodoEmpleado(empleado,NULL);
                    if (primero == NULL)
                    {
                        primero = nuevo;
                    }
                    else
                    {
                        actual = primero;
                        while (actual->getSig() != NULL)
                        {
                            actual = actual->getSig();
                        }
                        actual->setSig(nuevo);
                    }
                }
				else{
					cout<<"No se puede insertar"<<endl;
				}
            }
			else{
				NodoEmpleado* nuevo = new NodoEmpleado(empleado,NULL);
                    if (primero == NULL)
                    {
                        primero = nuevo;
                    }
                    else
                    {
                        actual = primero;
                        while (actual->getSig() != NULL)
                        {
                            actual = actual->getSig();
                        }
                        actual->setSig(nuevo);
                	  }
			}
        }
}
void ListaEmpleado::revisarContratos()
{
    NodoEmpleado* actual = primero;
    NodoEmpleado* previo = NULL;

    while (actual != NULL) {
        Empleado* empleado = actual->getEmpleado();
        ContratoPlazoFijo* contrato = dynamic_cast<ContratoPlazoFijo*>(empleado->getContrato());

        if (contrato != NULL && contrato->getDuracion() > 2) {
            cout << "El contrato de " << empleado->getNombre() << " ha excedido los dos años. ¿Desea continuar en la empresa? (s/n): ";
            char respuesta;
            cin >> respuesta;

            if (respuesta == 's' || respuesta == 'S') {
                empleado->setContrato(new ContratoTiempoIndefinido());
                previo = actual;
                actual = actual->getSig();
            }
            else {
                if (previo == NULL) {
                    primero = actual->getSig();
                }
                else {
                    previo->setSig(actual->getSig());
                }

                NodoEmpleado* temp = actual;
                actual = actual->getSig();
                delete temp;
            }
        }
        else {
            previo = actual;
            actual = actual->getSig();
        }
    }
}

string ListaEmpleado::toString()
{
    stringstream s;
    int con = 1;
    actual = primero;

    while (actual != NULL) {
        s << "(" << con++ << ")" << endl;
        s << actual->toStringNodo() << endl;
        actual = actual->getSig();
    }
    
        
    return s.str();
}

void ListaEmpleado::eliminarEmpleado(string id){
    NodoEmpleado* actual = primero;
    NodoEmpleado* previo = NULL;
    while(actual != NULL){
        if(actual->getEmpleado()->getCedula() == id){
            if(previo == NULL){
                primero = actual->getSig();
            }else{
                previo->setSig(actual->getSig());
            }
            NodoEmpleado* temp = actual;
            actual = actual->getSig();
            delete temp->getEmpleado()->getContrato();
            delete temp;
            cout << "Eliminado Correctamente";
            break;
        }else{
            previo = actual;
            actual = actual->getSig();
        }
    }
    if (actual == NULL) {
        cout << "No existe empleado con ese id" << endl;
    }
}

string ListaEmpleado::mostrarContratos(){
    actual = primero;
    stringstream s;
    while(actual != NULL){
        Contrato* contrato = dynamic_cast<Contrato*>(actual->getEmpleado()->getContrato());  

            if (contrato != nullptr) {
                    s<< actual->getEmpleado()->toString();
                    cout << "-------------------------------" << endl << endl;
                } else {
                    s << "El empleado no tiene un contrato.\n";
                }
                actual = actual->getSig();
    }
    return s.str();
}

string ListaEmpleado::reporteAeronavesTripulacion(){
    actual = primero;
    stringstream s;
    while(actual != NULL){
        Tripulantes* tripulante = dynamic_cast<Tripulantes*>(actual->getEmpleado());  

            if (tripulante != nullptr) {
                    s<< actual->getEmpleado()->toString();
                    s<< tripulante->getAvion()->toString();
                } else {
                    s << "El empleado no tiene un avion.\n";
                }
                actual = actual->getSig();
    }
    return s.str();
}

string ListaEmpleado::reportedePilotosParaAvionesdeCarga(){
    actual = primero;
    stringstream s;
    while(actual != NULL){
        Tripulantes* tripulante = dynamic_cast<Tripulantes*>(actual->getEmpleado());  
                
            if (tripulante != NULL) {
                if (Piloto* piloto = dynamic_cast<Piloto*>(tripulante)) {
                    if (aCarga* ac = dynamic_cast<aCarga*>(piloto->getAvion())) {
                        s<< actual->getEmpleado()->toString();
                        s<< ac->toString();
                    }
                }
            } else {
                s << "No hay piloto con avion de carga\n";
            }
            actual = actual->getSig();
    }
    return s.str();
}


string ListaEmpleado::reporteDeTodosLosContratosdeServicioProfesionales(){
    actual = primero;
    stringstream s;
    while(actual != NULL){
        Empleado* empleado = dynamic_cast<Empleado*>(actual->getEmpleado());  
                
            if (empleado != NULL) {
                if (ContratoServicioProfesionales* csp = dynamic_cast<ContratoServicioProfesionales*>(empleado->getContrato())) {
                    s<< actual->getEmpleado()->toString();
                }
            } else {
                s << "No hay contratos de servicio profesional\n";
            }
            actual = actual->getSig();
    }
    return s.str();
}

string ListaEmpleado::reporteDeTodosLosContratosdePlazoFijo(){
    actual = primero;
    stringstream s;
    while(actual != NULL){
        Empleado* empleado = dynamic_cast<Empleado*>(actual->getEmpleado());  
                
            if (empleado != NULL) {
                if (ContratoPlazoFijo* cpf = dynamic_cast<ContratoPlazoFijo*>(empleado->getContrato())) {
                    s<< actual->getEmpleado()->toString();
                    s<< cpf->toString();
                }
            } else {
                s << "No hay contratos de plazo fijo\n";
            }
            actual = actual->getSig();
    }
    return s.str();
}

string ListaEmpleado::reporteATodosLosContratosaTiempoIndefinido(){
    actual = primero;
    stringstream s;
    while(actual != NULL){
        Empleado* empleado = dynamic_cast<Empleado*>(actual->getEmpleado());  
                
            if (empleado != NULL) {
                if (ContratoTiempoIndefinido* cti = dynamic_cast<ContratoTiempoIndefinido*>(empleado->getContrato())) {
                    s<< actual->getEmpleado()->toString();
                }
            } else {
                s << "No hay contratos a tiempo indefinido\n";
            }
            actual = actual->getSig();
    }
    return s.str();
}

string ListaEmpleado::reportedeTripulacionesdeLosAvionesComerciales() {
    actual = primero;
    stringstream s;
    while (actual != NULL) {
        Tripulantes* tripulante = dynamic_cast<Tripulantes*>(actual->getEmpleado());

        if (tripulante != NULL) {
            if (Azafata* azafata = dynamic_cast<Azafata*>(tripulante)) {
                if (aComerciales* ac = dynamic_cast<aComerciales*>(azafata->getAvion())) {
                    s << actual->getEmpleado()->toString();
                }
            }
            if (Piloto* piloto = dynamic_cast<Piloto*>(tripulante)) {
                if (aComerciales* ac = dynamic_cast<aComerciales*>(piloto->getAvion())) {
                    s << actual->getEmpleado()->toString();
                }
            }
            if (Copiloto* copiloto = dynamic_cast<Copiloto*>(tripulante)) {
                if (aComerciales* ac = dynamic_cast<aComerciales*>(copiloto->getAvion())) {
                    s << actual->getEmpleado()->toString();
                }
            }
            else {
                s << "No tripulantes con aviones comerciales\n";
            }
            actual = actual->getSig();
        }
        return s.str();
    }
}

string ListaEmpleado::reportedeloscontratosplazofijoqueyaexcedieronlos2anios(){
    actual = primero;
    stringstream s;
    while(actual != NULL){
        Empleado* empleado = dynamic_cast<Empleado*>(actual->getEmpleado());  
                
            if (empleado != NULL) {
                if (ContratoPlazoFijo* cpf = dynamic_cast<ContratoPlazoFijo*>(empleado->getContrato())) {
                    if (cpf->getDuracion() > 2) {
                        s<< actual->getEmpleado()->toString();
                    }
                }
            } else {
                s << "No hay contratos de plazo fijo que excedan los 2 anios\n";
            }
            actual = actual->getSig();
    }
    return s.str();
}

string ListaEmpleado::consultadetripulantepormediodecedulaydevuelvesuavion(string c){
    actual = primero;
    stringstream s;
    while(actual != NULL){
        Tripulantes* tripulante = dynamic_cast<Tripulantes*>(actual->getEmpleado());  
                
            if (tripulante != NULL) {
                if (tripulante->getCedula() == c) {
                    s<< actual->getEmpleado()->toString();
                    s<< tripulante->getAvion()->toString();
                }
            } else {
                s << "No hay tripulantes con esa cedula\n";
            }
            actual = actual->getSig();
    }
    return s.str();
}

string ListaEmpleado::consultaporuncontratoconayudadelnumerodecontratoyeltipodecontratoquepertenece(int nC){
    actual = primero;
    stringstream s;
    while(actual != NULL){
        Empleado* empleado = dynamic_cast<Empleado*>(actual->getEmpleado());  
                
            if (empleado != NULL) {
                if (empleado->getContrato()->getCodContrato() == nC) {
                    if (ContratoPlazoFijo* cpf = dynamic_cast<ContratoPlazoFijo*>(empleado->getContrato())) {
                        s<< actual->getEmpleado()->toString();
                        s<< cpf->toString();
                    }
                    if (ContratoTiempoIndefinido* cti = dynamic_cast<ContratoTiempoIndefinido*>(empleado->getContrato())) {
                        s<< actual->getEmpleado()->toString();
                        s<< cti->toString();
                    }
                    if (ContratoServicioProfesionales* csp = dynamic_cast<ContratoServicioProfesionales*>(empleado->getContrato())) {
                        s<< actual->getEmpleado()->toString();
                        s<< csp->toString();
                    }
                }
            } else {
                s << "No hay contratos con ese numero\n";
            }
            actual = actual->getSig();
    }
    return s.str();
}
