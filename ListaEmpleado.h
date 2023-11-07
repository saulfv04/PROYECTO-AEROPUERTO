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
#include "ContenedorAviones.h"



class ListaEmpleado
{
	private:
		NodoEmpleado* primero;
		NodoEmpleado* actual;
	public:
		ListaEmpleado();
		~ListaEmpleado();
		void insertarEmpleado(Empleado*);
		void revisarContratos();
		void eliminarEmpleado(string);
		string toString();
		string mostrarContratos();
		string reporteAeronavesTripulacion();
		string reportedePilotosParaAvionesdeCarga();
		string reporteDeTodosLosContratosdeServicioProfesionales();
		string reporteDeTodosLosContratosdePlazoFijo();
		string reporteATodosLosContratosaTiempoIndefinido();
		string reportedeTripulacionesdeLosAvionesComerciales();
		string reportedeloscontratosplazofijoqueyaexcedieronlos2anios();
		


};

