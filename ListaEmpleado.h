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
//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
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
		bool eliminarEmpleado(int);
		string toString();
		string mostrarContratos();
		string reporteAeronavesTripulacion();
		string reportedePilotosParaAvionesdeCarga();
		int consultadetripulantepormediodecedulaydevuelvesuavion(string);

};

