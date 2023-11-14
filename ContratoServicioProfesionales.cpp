#include "ContratoServicioProfesionales.h"

ContratoServicioProfesionales::ContratoServicioProfesionales(int cod, string dP, double s, Fecha* fI, Fecha* fF, int hL, string tS):Contrato(cod,dP,s,fI,fF), horarioLaboral(hL),tipoServicio(tS){}

ContratoServicioProfesionales::~ContratoServicioProfesionales(){}

void ContratoServicioProfesionales::setHorarioLaboral(int hL)
{
	this->horarioLaboral = hL;
}

void ContratoServicioProfesionales::setTipoServicio(string tS)
{
	this->tipoServicio = tS;
}

int ContratoServicioProfesionales::getHorarioLaboral()
{
	return horarioLaboral;
}


string ContratoServicioProfesionales::toString()
{
	stringstream s;
	s << "---------CONTRATO DE SERVICIOS PROFESIONALES----------" << endl << endl;
	s << "Codigo del Contrato: " << codContrato << endl;
	s << " Descuento por el Puesto: " << descPuesto << endl;
	s << " Salario: " << salario << endl;
	s << " Fecha de Inicio: " << fInicio->toString() << endl;
	if (fFinal != NULL) {
		s << " Fecha de Conclusion del contrato: " << fFinal->toString() << endl;
	}
	s << "Horario Laboral: " << horarioLaboral << endl;
	s << "Tipo de Servicio: " << tipoServicio << endl;


	return s.str();
}
