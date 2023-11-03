#include "ContratoTiempoIndefinido.h"

ContratoTiempoIndefinido::ContratoTiempoIndefinido(int cod, string dP, double s, Fecha* fI) :Contrato(cod, dP, s, fI)
{
	fFinal = NULL;
	tipoCese = "INDEFINIDO";


}

ContratoTiempoIndefinido::~ContratoTiempoIndefinido()
{
}

void ContratoTiempoIndefinido::setFechaIngreso(Fecha* fI)
{
	fInicio = fI;
}

void ContratoTiempoIndefinido::setFechaporCese(Fecha* fC)
{
	string tipo;
	cout << "Ingrese el tipo de cese que la persona tuvo: ";
	cin >> tipo;

	tipoCese = tipo;

	fFinal = fC;
}

Fecha* ContratoTiempoIndefinido::getFechaIngreso()
{
	return fInicio;
}

Fecha* ContratoTiempoIndefinido::getFechaCese()
{
	return fFinal;
}

string ContratoTiempoIndefinido::getTipoCese()
{
	return tipoCese;
}

string ContratoTiempoIndefinido::toString()
{
	stringstream s;

	s << "Cese: " << tipoCese << endl;

	return s.str();
}
