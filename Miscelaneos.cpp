#include "Miscelaneos.h"

Miscelaneos::Miscelaneos(string c, string n, int e, string o, Contrato* cont, string gE, string lA) :Empleado(c, n, e, o, cont), gradoEscolar(gE),labor(lA){}

Miscelaneos::~Miscelaneos(){}

void Miscelaneos::setGradoEscolar(string gE) { this->gradoEscolar = gE; }

void Miscelaneos::setLabor(string lA) { this->labor = lA; }

string Miscelaneos::getLabor()
{
	return labor;
}

string Miscelaneos::getGradoEscolar()
{
	return gradoEscolar;
}

string Miscelaneos::toString()
{
	stringstream s;

	s << "Tipo de empleado Planta" << endl;
	s << " Tipo de Empleado de Planta: Miscelaneo" << endl;
	s << " Grado Escolar: " << gradoEscolar << endl;
	s << " Labor: " << labor << endl;

	return s.str();
}
