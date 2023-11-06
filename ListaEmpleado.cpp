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
