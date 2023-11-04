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


	string toString();

};

