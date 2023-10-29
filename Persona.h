#pragma once
#include <iostream>
#include <sstream>
#include <string>


using namespace std;
class Persona
{
	protected:
		string cedula;
		string nombre;
		int edad;
		string ocupacion;
	public:
		Persona(string, string, int, string);
		virtual ~Persona();
		
		void setCedula(string);
		void setNombre(string);
		void setEdad(int);
		void setOcupacion(string);

		string getCedula();
		string getNombre();
		int getEdad();
		string getOcupacion();

		virtual string toString();


};

