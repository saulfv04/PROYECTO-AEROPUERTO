//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
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

