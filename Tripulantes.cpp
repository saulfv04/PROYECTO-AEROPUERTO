#include "Tripulantes.h"

Tripulantes::Tripulantes(string c, string n, int e, string o,Contrato* cont, avion* a) :Empleado(c, n, e, o,cont), av(a) {}

Tripulantes::~Tripulantes(){}

void Tripulantes::setAvion(avion* a) { av = a; }

avion* Tripulantes::getAvion() {return av;}

