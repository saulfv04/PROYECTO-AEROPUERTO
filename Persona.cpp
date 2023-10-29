#include "Persona.h"

Persona::Persona(string c, string n, int e, string o): cedula(c), nombre(n),edad(e),ocupacion(o){}

Persona::~Persona(){}

void Persona::setCedula(string c) { cedula = c; }

void Persona::setNombre(string n) { nombre = n; }

void Persona::setEdad(int e) { edad = e; }

void Persona::setOcupacion(string o) { ocupacion = o; }

string Persona::getCedula()
{
	return cedula;
}

string Persona::getNombre()
{
	return nombre;
}

int Persona::getEdad()
{
	return edad;
}

string Persona::getOcupacion()
{
	return ocupacion;
}

string Persona::toString()
{
    stringstream s;

    s << "CEDULA: " << cedula << endl;

    s << "NOMBRE: " << nombre << endl;

    s << "EDAD: " << edad << endl;

    s << "OCUPACION: " << ocupacion << endl;

    return s.str();
}