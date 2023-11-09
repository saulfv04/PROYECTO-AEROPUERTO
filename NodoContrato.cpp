#include "NodoContrato.h"

NodoContrato::NodoContrato(Contrato* c, NodoContrato* s)
{
	this->con = c;
	this->sig = s;
}

NodoContrato::~NodoContrato()
{
}

void NodoContrato::setEmpleado(Contrato* c)
{
	this->con = c;
}

void NodoContrato::setSig(NodoContrato* s)
{
	this->sig = s;
}

Contrato* NodoContrato::getContrato()
{
	return con;
}

NodoContrato* NodoContrato::getSig()
{
	return sig;
}

string NodoContrato::toStringNodo()
{
	return con->toString();
}
