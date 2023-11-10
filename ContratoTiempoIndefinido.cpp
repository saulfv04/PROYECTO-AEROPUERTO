#include "ContratoTiempoIndefinido.h"

ContratoTiempoIndefinido::ContratoTiempoIndefinido(int cod, string dP, double s, Fecha* fI, string p, int cP) :Contrato(cod, dP, s, fI), plaza(p), codigoPlaza(cP)
{
	fFinal = NULL;
	tipoCese = "INDEFINIDO";
}
ContratoTiempoIndefinido::ContratoTiempoIndefinido():Contrato(0, "", 0, NULL)
{
	plaza = "";
	codigoPlaza = 0;
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

void ContratoTiempoIndefinido::setPlaza(string p)
{
	plaza = p;
}

void ContratoTiempoIndefinido::setCodigoPlaza(int cP)
{
	codigoPlaza = cP;
}

void ContratoTiempoIndefinido::setFechaporCese(Fecha* fC)
{
	string tipo;
	cout << "Ingrese el tipo de cese que la persona tuvo: ";
	cin >> tipo;

	tipoCese = tipo;

	fFinal = fC;
}

string ContratoTiempoIndefinido::getPlaza()
{
	return plaza;
}

int ContratoTiempoIndefinido::getCodigoPlaza()
{
	return codigoPlaza;
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

	s << "Codigo del Contrato: " << codContrato << endl;
	s << " Descuento por el Puesto: " << descPuesto << endl;
	s << " Salario: " << salario << endl;
	s << " Fecha de Inicio: " << fInicio->toString() << endl;
	if (fFinal != NULL) {
		s << " Fecha de Conclusion del contrato: " << fFinal->toString() << endl;
	}
	s << "Plaza: " << plaza << endl;
	s << " Codigo de plaza: " << codigoPlaza << endl;
	if (tipoCese != "INDEFINIDO") {
		s << "Cese: " << tipoCese << endl;
	}
	return s.str();
}
