#pragma once
#include "NodoContrato.h"
class ListaContrato
{
	private:
		NodoContrato* primero;
		NodoContrato* actual;


	public:
		ListaContrato();
		virtual ~ListaContrato();

		void insertaContrato(Contrato*);
		void eliminarContrato(int);
		Contrato* buscarContrato(int);
		string toString();





};

