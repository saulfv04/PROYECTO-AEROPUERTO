#include "Piloto.h"

Piloto::Piloto(string c, string n, int e, string o, avion* a , int aE): Tripulantes(c,n,e,o,a), aniosExp(aE){}

Piloto::~Piloto()
{
}

void Piloto::setAniosExp(int)
{
}

int Piloto::getAniosExp()
{
	return 0;
}

bool Piloto::revisaAvion()
{
	return false;
}

