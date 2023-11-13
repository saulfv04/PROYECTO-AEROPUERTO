//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
#pragma once
#include "Empleado.h"
class Miscelaneos : public Empleado
{
private:
	string gradoEscolar;
	string labor;
public:
	Miscelaneos(string, string, int, string, Contrato*, string,string);
	virtual ~Miscelaneos();

	void setGradoEscolar(string);
	void setLabor(string);


	string getLabor();
	string getGradoEscolar();


	virtual string toString();

};

