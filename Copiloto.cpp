#include "Copiloto.h"

Azafata::Azafata(string c, string n, int e, string o, avion* a, string t):Tripulantes(c,n,e,o), telefono(t) {}

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
