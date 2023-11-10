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
	s << " CEDULA: " << cedula << endl;

	s << " NOMBRE: " << nombre << endl;

	s << " EDAD: " << edad << endl;

	s << " OCUPACION: " << ocupacion << endl;

	s << " CONTRATO: " << endl << con->toString() << endl;

	s << "TIPO EMPLEADO PLANTA" << endl;
	s << " TIPO DE EMPLEADO DE PLANTA: MISCELANEO " << endl;
	s << " GRADO ESCOLAR: " << gradoEscolar << endl;
	s << " LABOR: " << labor << endl;

	return s.str();
}
