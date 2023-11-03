#pragma once
#include "Contrato.h"
class ContratoTiempoIndefinido :public Contrato
{
	private:
		string tipoCese;
	public:
		ContratoTiempoIndefinido(int, string, double, Fecha*);
		virtual ~ContratoTiempoIndefinido();

		void setFechaIngreso(Fecha*);

		void setFechaporCese(Fecha*);

		Fecha* getFechaIngreso();
		Fecha* getFechaCese();

		string getTipoCese();


		string toString();


};

