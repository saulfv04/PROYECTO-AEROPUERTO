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

	string toString();


};


