#pragma once
#include "avion.h"
#include "aCarga.h"
#define  const tam 15
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

		void eliminarAvion(int);
		string reporteDeAvionesConmasde20anios();
		aCarga* getAvionCarga();
};

