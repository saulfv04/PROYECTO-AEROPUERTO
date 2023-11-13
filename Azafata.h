//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
#pragma once
#include "Tripulantes.h"
class Azafata : public Tripulantes
{
	private:
		string telefono;
	public:
		Azafata(string, string, int, string,Contrato*,avion*, string);
		virtual ~Azafata();

		void setTelefono(string);

		string getTelefono();

		virtual string toString();

		
};

