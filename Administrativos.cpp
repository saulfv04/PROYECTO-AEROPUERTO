#include "Administrativos.h"

Administrativos::Administrativos(string c, string n, int e, string o, Contrato* cont, string tA) :Empleado(c, n, e, o, cont), tituloAdm(tA){}

Administrativos::~Administrativos()
{
}

void Administrativos::setTitulo(string tA)
{
	this->tituloAdm = tA;
}

string Administrativos::getTitulo()
{
	return tituloAdm;
}

string Administrativos::toString()
{
	stringstream s;

	s << "---------ADMINISTRATIVO----------" << endl << endl;
	s << " CEDULA: " << cedula << endl;

	s << " NOMBRE: " << nombre << endl;

	s << " EDAD: " << edad << endl;

	s << " OCUPACION: " << ocupacion << endl;

	s << " CONTRATO: " << endl << con->toString() << endl;

	s << "EMPLEADO DE PLANTA" << endl;
	s << "TIPO DE EMPLEADO: ADMINISTRATIVO" << endl;
	s << "TITULO ADMINISTRATIVO: " << tituloAdm << endl;

	
	return s.str();
}
