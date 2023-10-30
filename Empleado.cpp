#include "Empleado.h"

Empleado::Empleado(string c, string n, int e, string o): cedula(c), nombre(n),edad(e),ocupacion(o){}

Empleado::~Empleado(){}

void Empleado::setCedula(string c) { cedula = c; }

void Empleado::setNombre(string n) { nombre = n; }

void Empleado::setEdad(int e) { edad = e; }

void Empleado::setOcupacion(string o) { ocupacion = o; }

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

string Empleado::toString()
{
    stringstream s;

    s << "CEDULA: " << cedula << endl;

    s << "NOMBRE: " << nombre << endl;

    s << "EDAD: " << edad << endl;

    s << "OCUPACION: " << ocupacion << endl;

    return s.str();
}