#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "Contrato.h"


using namespace std;
class Empleado
{
	protected:
		string cedula;
		string nombre;
		int edad;
		string ocupacion;
		Contrato* con;
	public:
		Empleado(string, string, int, string,Contrato*);
		virtual ~Empleado();
		
		void setCedula(string);
		void setNombre(string);
		void setEdad(int);
		void setOcupacion(string);
		void setContrato(Contrato*);

		Contrato* getContrato();
		string getCedula();
		string getNombre();
		int getEdad();
		string getOcupacion();

		virtual string toString();


};

