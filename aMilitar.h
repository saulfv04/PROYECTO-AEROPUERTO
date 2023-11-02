#pragma once
#include "avion.h"
#include "tipoAvionMilitar.h"
class aMilitar :public avion
{
	private:
		double velocidadMax;
		tipoAvionMilitar* t;
		string categoriaAv;
		string tipo;
	public:
		aMilitar(Fecha*, double,double,string);
		virtual ~aMilitar();

		void setVelocidadMax(double);
		void setTipoAvionMilitar(string);
		void setCategoriaAv(string);

		double getVelocidadMax();
		string gettipoAvionMilitar();
		string getcategoriaAv();

		string toString();









};

