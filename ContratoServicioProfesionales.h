//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
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

		virtual string toString();

		



};

