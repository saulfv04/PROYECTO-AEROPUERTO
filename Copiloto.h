//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
#pragma once
#include "Tripulantes.h"
class Copiloto : public Tripulantes
{
private:
	string nacionalidad;
public:
	Copiloto(string, string, int, string, Contrato*,avion*, string);

	virtual ~Copiloto();

	void setNacionalidad(string);

	string getNacionalidad();

	 virtual string toString();


};


