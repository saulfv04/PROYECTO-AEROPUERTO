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
int ContratoPlazoFijo::getDuracion()
{
	  int aniosTrabajando = getFechaCulminacion()->getAnio() - getFechaIngreso()->getAnio();

    // If the end month is before the start month, or if the end month is the same but the end day is before the start day, subtract a year
    if (getFechaCulminacion()->getMes() < getFechaIngreso()->getMes() ||
        (getFechaCulminacion()->getMes() == getFechaIngreso()->getMes() && getFechaCulminacion()->getDia() < getFechaIngreso()->getDia())) {
        aniosTrabajando--;
    }

    return aniosTrabajando;
}


