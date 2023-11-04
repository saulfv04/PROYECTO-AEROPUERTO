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

