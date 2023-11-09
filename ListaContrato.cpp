#include "ListaContrato.h"

ListaContrato::ListaContrato()
{
	primero = NULL;
	actual = NULL;
}

ListaContrato::~ListaContrato(){}

void ListaContrato::insertaContrato(Contrato* c){
	actual = primero;
	NodoContrato* nuevo = new NodoContrato(c, NULL);
	if (primero == NULL) {
		primero = nuevo;
	}
	else {
		actual = primero;
		while (actual->getSig() != NULL) {
			actual = actual->getSig();
		}
		actual->setSig(nuevo);
	}
}

void ListaContrato::eliminarContrato(int cod){
	NodoContrato* aux = primero;
	NodoContrato* ant = NULL;
	while (aux != NULL && aux->getContrato()->getCodContrato() != cod) {
		ant = aux;
		aux = aux->getSig();
	}
	if (aux == NULL) {
		cout << "No se encontro el contrato" << endl;
	}
	else if (ant == NULL) {
		primero = primero->getSig();
		delete aux;
	}
	else {
		ant->setSig(aux->getSig());
		delete aux;
	}
}

string ListaContrato::toString(){
	stringstream s;
	actual = primero;
	while (actual != NULL) {
		s << actual->getContrato()->toString() << endl;
		actual = actual->getSig();
	}
	return s.str();
}

Contrato* ListaContrato::buscarContrato(int cod) {
	actual = primero;
	while (actual != NULL && actual->getContrato()->getCodContrato() != cod) {
		actual = actual->getSig();
	}
	if (actual == NULL) {
		return NULL;
	}
	else {
		return actual->getContrato();
	}
}
