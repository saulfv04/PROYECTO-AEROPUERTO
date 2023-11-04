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


		string toString();
		

};

