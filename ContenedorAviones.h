//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
#pragma once
#include "avion.h"
#include "aCarga.h"

class ContenedorAviones
{
	private:
		avion** vec;
		int tam;
		int cant;
	public:
		ContenedorAviones();
		~ContenedorAviones();
		void insertarAvion(avion*);
		string toString();
		int getCant();
		avion* getAvion(int);

		bool eliminarAvion(int);
		string reporteDeAvionesConmasde20anios();
		string getAvionCarga();
		string informaciondelaaeronavedeAviacioncivilconsuplaca(int);
};

