//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
#pragma once
#include "Contrato.h"
class ContratoPlazoFijo :public Contrato
{
	public:
	
	ContratoPlazoFijo(int, string, double, Fecha*, Fecha*);
	virtual ~ContratoPlazoFijo();

	void setFechaIngreso(Fecha*);
	void setFechaCulminacion(Fecha*);

	Fecha* getFechaIngreso();
	Fecha* getFechaCulminacion();
	int getDuracion();

	virtual string toString();

};
