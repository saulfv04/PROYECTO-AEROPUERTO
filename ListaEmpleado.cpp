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

bool ListaEmpleado::eliminarEmpleado(int id){
    NodoEmpleado* Panterior = NULL;
    actual = primero;

    if (primero == NULL) {
        return false;
    }
    if (actual != NULL && actual->getEmpleado()->getContrato()->getCodContrato() == id) {
        delete actual;
        return true;
    }

    while (actual != NULL) {
        Panterior = actual;
        actual->getSig();
    }
    if (actual == NULL) {
        return false;
    }
    else {
        Panterior->setSig(actual->getSig());
        delete actual;
        return true;
    }
    return false;
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


int ListaEmpleado::consultadetripulantepormediodecedulaydevuelvesuavion(string c){
    actual = primero;
    stringstream s;
    while(actual != NULL){
        Tripulantes* tripulante = dynamic_cast<Tripulantes*>(actual->getEmpleado());  
                
            if (tripulante != NULL) {
                if (tripulante->getCedula() == c) {
                    if (aMilitar* aM = dynamic_cast<aMilitar*>(tripulante->getAvion())) {
                        return 1;
                    }
                    if (aCarga* aC = dynamic_cast<aCarga*>(tripulante->getAvion())) {
                        if (aComerciales* aCo = dynamic_cast<aComerciales*>(aC)){
                            return 2;
                        }
                        if (aCarga* aCa = dynamic_cast<aCarga*>(aC)) {
                            return 3;
                        }
                    }
               }
            } else {
                s << "No hay tripulantes con esa cedula\n";
            }
            actual = actual->getSig();
    }
    return 0;
}


