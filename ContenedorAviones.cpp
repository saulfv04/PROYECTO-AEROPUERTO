#include "ContenedorAviones.h"

ContenedorAviones::ContenedorAviones()
{
	vec = new avion*[tam];
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

void ContenedorAviones::eliminarAvion(int i){
	delete vec[i];
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
aCarga* ContenedorAviones::getAvionCarga(){
	aCarga* avionMayorArea = nullptr;
    double mayorArea = 0;

    for (int i = 0; i < cant; i++) {
        aCarga* ac = dynamic_cast<aCarga*>(vec[i]);
        if (ac != nullptr && ac->darCapacidad() > mayorArea) {  // Suponiendo que tienes un método getArea
            avionMayorArea = ac;
            mayorArea = ac->darCapacidad();
        }
    }

    return avionMayorArea;
}
