#pragma once
#include "Tripulantes.h"
class Azafata : public Tripulantes
{
	private:
		string telefono;
	public:
		Azafata(string, string, int, string, avion*, string);
		
		virtual ~Azafata();

		void setTelefono(string);

		string getTelefono();

		virtual bool revisaAvion();
};

