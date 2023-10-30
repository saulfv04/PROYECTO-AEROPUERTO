#pragma once
#include "Tripulantes.h"
class Azafata : public Tripulantes
{
private:
	string nacionalidad;
public:
	Azafata(string, string, int, string, avion*, string);

	virtual ~Azafata();

	void setNacionalidad(string);

	string getNacionalidad();

	virtual bool revisaAvion();
};


