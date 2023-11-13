//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
#pragma once
#include "avion.h"
class aCivil :public avion
{
protected:
	int numeroPlaca;
public:

	aCivil(Fecha*,double,int);
	virtual ~aCivil();

	void setNumeroPlaca(int);
	

	int getNumeroPlaca();
	

	virtual string toString() = 0;



};

