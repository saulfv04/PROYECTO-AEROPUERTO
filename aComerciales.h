#pragma once
#include "aCivil.h"
#include "tipoAvionComercial.h"
class aComerciales :public aCivil
{
	private:
		int numeroCategoria;
		bool pasilloUnico;
		bool doblePasillo;
		string tipo;
		tipoAvionComercial* t;
	public:
		
		aComerciales(Fecha*,double,int,int,bool,bool);
		
		virtual ~aComerciales();

		void setNumeroCategoria(int);
		void setPasilloUnico(bool);
		void setDoblePiso(bool);
		void setTipo(int);


		string getTipo();
		int getNumeroCategoria();
		bool getPasilloUnico();
		bool getDoblePiso();

		string toString();






};

