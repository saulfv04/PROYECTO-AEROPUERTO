#include "Empleado.h"

Empleado::Empleado(string c, string n, int e, string o,Contrato* cont): cedula(c), nombre(n),edad(e),ocupacion(o),con(cont){}

Empleado::~Empleado(){}

void Empleado::setCedula(string c) { cedula = c; }

void Empleado::setNombre(string n) { nombre = n; }

void Empleado::setEdad(int e) { edad = e; }

void Empleado::setOcupacion(string o) { ocupacion = o; }

void Empleado::setContrato(Contrato* cont)
{
    con = cont;
}

Contrato* Empleado::getContrato()
{
    return con;
}

string Empleado::getCedula()
{
	return cedula;
}

string Empleado::getNombre()
{
	return nombre;
}

int Empleado::getEdad()
{
	return edad;
}

string Empleado::getOcupacion()
{
	return ocupacion;
}

