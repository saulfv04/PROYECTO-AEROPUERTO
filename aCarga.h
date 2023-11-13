//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Sa�l Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
#pragma once
#include "aCivil.h"
#include "tipoAvionCarga.h"
class aCarga :public aCivil
{
	private:
		double alturaPuerta;
		double anchuraPuerta;
		bool escotilla;
		bool puertaLateral;
		string categoria;
		string tipo;
		tipoAvionCarga* t;
	public:
		aCarga(Fecha*, double, int,double,double,bool,bool,string);
		virtual ~aCarga();

		void setAlturaPuerta(double);
		void setAnchuraPuerta(double);
		void setEscotilla(bool);
		void setPuertaLateral(bool);
		void setCateoria(string);
		void setTipo(string);

		string getTipo();
		string getCategoria();
		double getAlturaPuerta();
		double getAnchuraPuerta();
		bool getEscotilla();
		bool getPuertalLateral();
		double darCapacidad();

		virtual string toString();


};

