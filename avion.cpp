#include "avion.h"

avion::avion(Fecha* f, double dR): fechaCreacion(f), distanciaRecorrida(dR){}

avion::~avion()
{
	if (fechaCreacion != NULL) {
		delete fechaCreacion;
	}
}

void avion::setFecha(Fecha* f)
{
	fechaCreacion = f;
}

void avion::setDistanciaRecorrida(double dR)
{
	distanciaRecorrida = dR;
}

Fecha* avion::getFecha()
{
	return fechaCreacion;
}

double avion::getDistanRecorrida()
{
	return distanciaRecorrida;
}

