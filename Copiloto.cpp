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

	s << " CEDULA: " << cedula << endl;

	s << " NOMBRE: " << nombre << endl;

	s << " EDAD: " << edad << endl;

	s << " OCUPACION: " << ocupacion << endl;

	s << " CONTRATO: " << endl << con->toString() << endl;

	s << "NACIONALIDAD: " << nacionalidad << endl;

	s << "AVION:" << endl << this->av->toString() << endl;

	return s.str();
}
