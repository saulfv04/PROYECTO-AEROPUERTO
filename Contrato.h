//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Sa�l Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "FECHA.h"


using namespace std;
class Contrato
{
	protected:
		int codContrato;
		string descPuesto;
		double salario;
		Fecha* fInicio;
		Fecha* fFinal;

	public:
		Contrato(int, string, double,Fecha*,Fecha*);
		Contrato(int, string, double, Fecha*);
		
		virtual ~Contrato();

		void setCoContrato(int);
		void setDescPuesto(string);
		void setSalario(double);
		void setFechaInicio(Fecha*);
		void setFechaFinal(Fecha*);
		
		int getCodContrato();
		string getDescPuesto();
		double getSalario();
		Fecha* getFechaInicio();
		Fecha* getFechaFinal();

		virtual string toString() = 0;



	

};

