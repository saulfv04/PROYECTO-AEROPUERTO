//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
#pragma once
#include "Tripulantes.h"
class Piloto : public Tripulantes
{
	private:
		int aniosExp;
	public:
		Piloto(string, string, int, string,Contrato*, avion*, int);
		virtual ~Piloto();

		void setAniosExp(int);

		int getAniosExp();

		virtual string toString();
		

		 


};

