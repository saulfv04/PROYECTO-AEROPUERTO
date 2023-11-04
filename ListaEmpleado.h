#pragma once
#include "NodoEmpleado.h"
#include "Tripulantes.h"
#include "Piloto.h"
#include "Copiloto.h"
#include "Azafata.h"
#include "avion.h"
#include "aMilitar.h"
#include "aCarga.h"
#include "aComerciales.h"
#include "aCivil.h"



class ListaEmpleado
{
	private:
		NodoEmpleado* primero;
		NodoEmpleado* actual;
	public:
		ListaEmpleado();
		void insertarEmpleado(Empleado*);
		string toString();

};

