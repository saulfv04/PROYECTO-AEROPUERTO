#include "Contrato.h"

Contrato::Contrato(int cod, string dP, double s , Fecha* fI, Fecha* fF): codContrato(cod) , descPuesto(dP), salario(s), fInicio(fI),fFinal(fF){}

Contrato::Contrato(int cod, string dP, double s, Fecha* fI) : codContrato(cod), descPuesto(dP), salario(s), fInicio(fI), fFinal(NULL){}

Contrato::~Contrato()
{
	if (fInicio != NULL) {
		delete fInicio;
	}
	if (fFinal != NULL) {
		delete fFinal;
	}
}

void Contrato::setCoContrato(int cod)
{
	codContrato = cod;
}

void Contrato::setDescPuesto(string dP)
{
	descPuesto = dP;
}

void Contrato::setSalario(double s)
{
	salario = s;
}

void Contrato::setFechaInicio(Fecha* fI)
{
	fInicio = fI;
}

void Contrato::setFechaFinal(Fecha* fF)
{
	fFinal = fF;
}

int Contrato::getCodContrato()
{
	return codContrato;
}

string Contrato::getDescPuesto()
{
	return descPuesto;
}

double Contrato::getSalario()
{
	return salario;
}

Fecha* Contrato::getFechaInicio()
{
	return fInicio;
}

Fecha* Contrato::getFechaFinal()
{
	return fFinal;
}


