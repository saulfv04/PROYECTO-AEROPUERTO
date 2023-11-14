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

string Piloto::toString()
{
	stringstream s;
	s << "---------PILOTO----------" << endl << endl;
	s << " CEDULA: " << cedula << endl;

	s << " NOMBRE: " << nombre << endl;

	s << " EDAD: " << edad << endl;

	s << " OCUPACION: " << ocupacion << endl;

	s << " CONTRATO: " << endl << con->toString() << endl;

	s << "ANIOS EXPERIENCIA: " << aniosExp << endl;

	s << "AVION:" << endl << this->av->toString() << endl;

	return s.str();
}



