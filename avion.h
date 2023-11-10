#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "FECHA.h"

using namespace std;

class avion
{
	protected:
		Fecha* fechaCreacion;
		double distanciaRecorrida;
	public:
		avion(Fecha*, double);
		virtual ~avion();

		void setFecha(Fecha*);
		void setDistanciaRecorrida(double);

		Fecha* getFecha();
		double getDistanRecorrida();

		virtual string toString() = 0;
		


};

