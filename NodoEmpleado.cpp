#include "NodoEmpleado.h"

NodoEmpleado::NodoEmpleado(Empleado* e, NodoEmpleado* s)
{
	this->emp = e;
	this->sig = s;
}

NodoEmpleado::~NodoEmpleado()
{
}

void NodoEmpleado::setEmpleado(Empleado* e)
{
	this->emp = e;
}

void NodoEmpleado::setSig(NodoEmpleado* s)
{
	this->sig = s;
}

Empleado* NodoEmpleado::getEmpleado()
{
	return emp;
}

NodoEmpleado* NodoEmpleado::getSig()
{
	return sig;
}

string NodoEmpleado::toStringNodo()
{
	return emp->toString();
}
