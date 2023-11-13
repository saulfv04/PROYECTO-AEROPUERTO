//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
#pragma once
#include "Contrato.h"
#include <iostream>
#include <string>
#include <sstream>


using namespace std;

class NodoContrato 
{
	private: 
		Contrato* con;
		NodoContrato* sig;
	public:
		NodoContrato(Contrato*, NodoContrato*);
		virtual ~NodoContrato();

		void setEmpleado(Contrato*);
		void setSig(NodoContrato*);

		Contrato* getContrato();

		NodoContrato* getSig();


		string toStringNodo();

};

