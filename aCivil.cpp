#include "aCivil.h"

aCivil::aCivil(Fecha* f, double dr, int numP, string tA) : avion(f,dr), numeroPlaca(numP), tipoAvion(tA){}

aCivil::~aCivil()
{
}

void aCivil::setNumeroPlaca(int numP)
{
	this->numeroPlaca = numP;
}

void aCivil::setTipoAvion(string tA)
{
	this->tipoAvion = tA;
}

int aCivil::getNumeroPlaca()
{
	return numeroPlaca;
}

string aCivil::getTipoAvion()
{
	return tipoAvion;
}

string aCivil::toString()
{
	stringstream s;
		s << "Numero de Placa: " << numeroPlaca << endl;
		s << " Tipo de avion: " << tipoAvion << endl;

	return s.str();
}


