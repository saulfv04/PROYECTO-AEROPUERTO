//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
#pragma once
#include "Empleado.h"
class Administrativos:public Empleado
{
	private:
		string tituloAdm;
	public:
		Administrativos(string, string, int, string, Contrato*, string);
		virtual ~Administrativos();

		void setTitulo(string);

		string getTitulo();


		virtual string toString();
		

};

