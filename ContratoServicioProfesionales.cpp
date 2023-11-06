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


	s << "Horario Laboral: " << horarioLaboral << endl;
	s << "Tipo de Servicio: " << tipoServicio << endl;


	return s.str();
}
