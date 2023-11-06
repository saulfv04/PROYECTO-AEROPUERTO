#include "Copiloto.h"

Copiloto::Copiloto(string c, string n, int e, string o,Contrato* cont, avion* a, string na) :Tripulantes(c, n, e, o,cont,a), nacionalidad(na) {}

Copiloto::~Copiloto()
{}

void Copiloto::setNacionalidad(string na)
{
	nacionalidad = na;
}

string Copiloto::getNacionalidad()
{
	return nacionalidad;
}

string Copiloto::toString()
{
	stringstream s;
	s << "Nacionalidad: " << nacionalidad << endl;

	return s.str();
}
