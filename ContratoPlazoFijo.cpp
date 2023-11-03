#include "ContratoPlazoFijo.h"

ContratoPlazoFijo::ContratoPlazoFijo(int cod, string dP, double s, Fecha* fI, Fecha* fF):Contrato(cod, dP, s, fI, fF){}

ContratoPlazoFijo::~ContratoPlazoFijo(){}

void ContratoPlazoFijo::setFechaIngreso(Fecha* fI)
{
	fInicio = fI;
}

void ContratoPlazoFijo::setFechaCulminacion(Fecha* fF)
{
	fFinal = fF;
}

Fecha* ContratoPlazoFijo::getFechaIngreso()
{
	return fInicio;
}

Fecha* ContratoPlazoFijo::getFechaCulminacion()
{
	return fFinal;
}


