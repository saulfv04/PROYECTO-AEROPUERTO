//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
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

		 virtual string toString();









};

