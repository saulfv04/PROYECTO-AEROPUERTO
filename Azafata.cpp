#include "Azafata.h"

Azafata::Azafata(string c, string n, int e, string o,Contrato* cont, avion* a, string t):Tripulantes(c,n,e,o,cont,a), telefono(t) {}

Azafata::~Azafata()
{}

void Azafata::setTelefono(string t)
{
	telefono = t;
}

string Azafata::getTelefono()
{
	return telefono;
}

string Azafata::toString()
{
	stringstream s;
	s << "---------AZAFATA----------" << endl << endl;
	s << " CEDULA: " << cedula << endl;

	s << " NOMBRE: " << nombre << endl;

	s << " EDAD: " << edad << endl;

	s << " OCUPACION: " << ocupacion << endl;

	s << " CONTRATO: " << endl << con->toString() << endl;


	s << "TELEFONO: " << telefono << endl;

	s << "AVION:" << endl << this->av->toString() << endl;

	return s.str();
}
