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

	s << "Empleado de Planta" << endl;
	s << "Tipo de Empleado: Administrativo" << endl;
	s << "Titulo Administrativo: " << tituloAdm << endl;

	
	return s.str();
}
