#pragma once
#include "Contrato.h"
class ContratoServicioProfesionales : public Contrato
{
	private:
		int horarioLaboral;
		string tipoServicio;
	public:
		ContratoServicioProfesionales(int, string, double, Fecha*, Fecha*,int,string);
		virtual ~ContratoServicioProfesionales();


		void setHorarioLaboral(int);
		void setTipoServicio(string);


		int getHorarioLaboral();

		string toString();



};

