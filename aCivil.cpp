#include "aCivil.h"

aCivil::aCivil(Fecha* f, double dr, int numP) : avion(f,dr), numeroPlaca(numP){}

aCivil::~aCivil(){}

void aCivil::setNumeroPlaca(int numP)
{
	this->numeroPlaca = numP;
}

int aCivil::getNumeroPlaca()
{
	return numeroPlaca;
}



