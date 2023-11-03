#include "Piloto.h"

Piloto::Piloto(string c, string n, int e, string o,Contrato* cont ,avion* a, int aE) : Tripulantes(c, n, e, o,cont , a),aniosExp(aE){}

Piloto::~Piloto(){}

void Piloto::setAniosExp(int aE)
{
	this->aniosExp = aE;
}

int Piloto::getAniosExp()
{
	return aniosExp;
}



