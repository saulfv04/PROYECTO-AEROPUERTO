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

		string toString();

		
};

