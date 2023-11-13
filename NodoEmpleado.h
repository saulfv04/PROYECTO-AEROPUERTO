//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
#pragma once
#include "Empleado.h"
class NodoEmpleado
{
	private:
		Empleado* emp;
		NodoEmpleado* sig;
	public:
		NodoEmpleado(Empleado*, NodoEmpleado*);
		~NodoEmpleado();
		
		void setEmpleado(Empleado*);
		void setSig(NodoEmpleado*);

		Empleado* getEmpleado();
		NodoEmpleado* getSig();

		string toStringNodo();


	
};

