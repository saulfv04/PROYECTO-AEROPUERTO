//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
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

