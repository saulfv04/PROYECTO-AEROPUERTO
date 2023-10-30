#include "Azafata.h"

Azafata::Azafata(string c, string n, int e, string o, avion* a, string na) :Tripulantes(c, n, e, o), nacionalidad(na) {}

Azafata::~Azafata()
{}

void Azafata::setNacionalidad(string na)
{
	nacionalidad = na;
}

string Azafata::getNacionalidad()
{
	return nacionalidad;
}