#pragma once
#include "Contrato.h"
class ContratoTiempoIndefinido :public Contrato
{
	private:
		string plaza;
		int codigoPlaza;
		string tipoCese;
	public:
		ContratoTiempoIndefinido(int, string, double, Fecha*,string,int);
		ContratoTiempoIndefinido();
		virtual ~ContratoTiempoIndefinido();

		void setFechaIngreso(Fecha*);
		void setPlaza(string);
		void setCodigoPlaza(int);
		void setFechaporCese(Fecha*);


		string getPlaza();
		int getCodigoPlaza();
		Fecha* getFechaIngreso();
		Fecha* getFechaCese();

		string getTipoCese();


		virtual string toString();


};

