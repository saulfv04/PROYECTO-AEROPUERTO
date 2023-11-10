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

    
    if (getFechaCulminacion()->getMes() < getFechaIngreso()->getMes() ||
        (getFechaCulminacion()->getMes() == getFechaIngreso()->getMes() && getFechaCulminacion()->getDia() < getFechaIngreso()->getDia())) {
        aniosTrabajando--;
    }

    return aniosTrabajando;
}

string ContratoPlazoFijo::toString()
{
	stringstream s;

	s << "Codigo del Contrato: " << codContrato << endl;
	s << " Descuento por el Puesto: " << descPuesto << endl;
	s << " Salario: " << salario << endl;
	s << " Fecha de Inicio: " << fInicio->toString() << endl;
	if (fFinal != NULL) {
		s << " Fecha de Conclusion del contrato: " << fFinal->toString() << endl;
	}
    return s.str();
}


