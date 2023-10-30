#pragma once
#include "Tripulantes.h"
class Piloto : public Tripulantes
{
	private:
		int aniosExp;
	public:
		Piloto(string, string, int, string, avion*, int);
		virtual ~Piloto();

		void setAniosExp(int);

		int getAniosExp();

		 virtual bool revisaAvion();


};

