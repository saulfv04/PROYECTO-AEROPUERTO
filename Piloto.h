#pragma once
#include "Tripulantes.h"
class Piloto : public Tripulantes
{
	private:
		int aniosExp;
	public:
		Piloto(string, string, int, string,Contrato*, avion*, int);
		virtual ~Piloto();

		void setAniosExp(int);

		int getAniosExp();

		string toString();
		

		 


};

