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
#include "ContratoPlazoFijo.h"
#include "ContratoTiempoIndefinido.h"
#include "ContratoServicioProfesionales.h"
#include "Administrativos.h"
#include "Miscelaneos.h"




class ListaEmpleado
{
	private:
		NodoEmpleado* primero;
		NodoEmpleado* actual;
	public:
		ListaEmpleado();
		void insertarEmpleado(Empleado*);
		void revisarContratos();
		string toString();

};

