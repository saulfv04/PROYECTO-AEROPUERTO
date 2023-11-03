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
