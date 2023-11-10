#pragma once
#include "Empleado.h"
#include "avion.h"
class Tripulantes :public Empleado
{
	protected:
		avion* av;
	public:
		Tripulantes(string, string, int, string,Contrato*,avion*);
		virtual ~Tripulantes();

		void setAvion(avion*);

		avion* getAvion();

		virtual string toString() = 0;

};

