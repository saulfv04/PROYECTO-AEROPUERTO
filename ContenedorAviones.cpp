#include "ContenedorAviones.h"

ContenedorAviones::ContenedorAviones()
{
	vec = new avion*[15];
	tam = 15;
	cant = 0;
	for(int i = 0; i < tam; i++)
	{
		vec[i] = NULL;
	}
	
}

ContenedorAviones::~ContenedorAviones()
{
	for(int i = 0; i < cant; i++)
	{
		delete vec[i];
	}
	delete[] vec;
}

void ContenedorAviones::insertarAvion(avion* a){
	if (cant < tam)
	{
		vec[cant] = a;
		cant++;
	}
	else
	{
		cout << "No hay espacio para mas aviones" << endl;
	}
}

string ContenedorAviones::toString(){
	stringstream s;
	for(int i = 0; i < cant; i++)
	{
		s << vec[i]->toString() << endl;
	}
	return s.str();
}

int ContenedorAviones::getCant()
{
	return 0;
}

avion* ContenedorAviones::getAvion(int i){
	return vec[i];
}

bool ContenedorAviones::eliminarAvion(int i){
	if (i <= 15) {
		if (vec[i] != NULL) {
			delete vec[i];
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

string ContenedorAviones::reporteDeAvionesConmasde20anios(){
	stringstream s;
	for(int i = 0; i < cant; i++)
	{
		if (vec[i]->getFecha()->getAnio() < 1998)
		{
			s << vec[i]->toString() << endl;
		}
	}
	return s.str();
}
string ContenedorAviones::getAvionCarga(){
	aCarga* avionMayorArea = nullptr;
    double mayorArea = 0;
	double aux = 0;
    for (int i = 0; i < cant; i++) {
        aCarga* ac = dynamic_cast<aCarga*>(vec[i]);
		aux = ac->getAlturaPuerta()* ac->getAnchuraPuerta();
        if (ac != nullptr && aux > mayorArea) {  
            avionMayorArea = ac;
            mayorArea = aux;
        }
    }

	return avionMayorArea->toString();
}

string ContenedorAviones::informaciondelaaeronavedeAviacioncivilconsuplaca(int p){
	stringstream s;
	for(int i = 0; i < cant; i++)
	{
		aCivil* a = dynamic_cast<aCivil*>(vec[i]);
		if (a->getNumeroPlaca() == p)
		{
			s << a->toString() << endl;
		}
	}
	return s.str();
}
