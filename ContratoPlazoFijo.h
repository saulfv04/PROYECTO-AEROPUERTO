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

	string toString();

};
