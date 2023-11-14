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

string ListaContrato::reporteDeLosContratosServiciosProfesionales()
{
	actual = primero;
	stringstream s;
	while (actual != NULL) {
		ContratoServicioProfesionales* csp = dynamic_cast<ContratoServicioProfesionales*>(actual->getContrato());

		if (csp != NULL) {
				s << actual->toStringNodo();
		}
		else {
			s << "No hay contratos de servicio profesional\n";
		}
		actual = actual->getSig();
	}
	return s.str();
	
}

string ListaContrato::reporteDeTodosLosContratosdePlazoFijo()
{
	actual = primero;
	stringstream s;
	while (actual != NULL) {
		ContratoPlazoFijo* cpf = dynamic_cast<ContratoPlazoFijo*>(actual->getContrato());

		if (cpf != NULL) {
			s << actual->toStringNodo();
		}
		else {
			s << "No hay contratos de plazo fijo\n";
		}
		actual = actual->getSig();
	}
	return s.str();
}

string ListaContrato::reporteATodosLosContratosaTiempoIndefinido()
{
	actual = primero;
	stringstream s;
	while (actual != NULL) {
		ContratoTiempoIndefinido* ctI = dynamic_cast<ContratoTiempoIndefinido*>(actual->getContrato());

		if (ctI != NULL) {
			s << actual->toStringNodo();
		}
		else {
			s << "No hay contratos de tiempo indefinido\n";
		}
		actual = actual->getSig();
	}
	return s.str();
}

string ListaContrato::reportedeloscontratosplazofijoqueyaexcedieronlos2anios()
{
	actual = primero;
	stringstream s;
	while (actual != NULL) {
		if (ContratoPlazoFijo* cpf = dynamic_cast<ContratoPlazoFijo*>(actual->getContrato())) {
			if (cpf->getDuracion() > 2) {
					s << actual->toStringNodo();
				}
		}
		else {
			s << "No hay contratos de plazo fijo que excedan los 2 anios\n";
		}
		actual = actual->getSig();
	}
	return s.str();
}

int ListaContrato::consultaporuncontratoconayudadelnumerodecontratoyeltipodecontratoquepertenece(int nC)
{
	actual = primero;
	stringstream s;
	if (actual != NULL) {
		if (actual->getContrato()->getCodContrato() == nC) {
			if (ContratoPlazoFijo* cpf = dynamic_cast<ContratoPlazoFijo*>(actual->getContrato())) {
				return 1;
			}
			if (ContratoTiempoIndefinido* cti = dynamic_cast<ContratoTiempoIndefinido*>(actual->getContrato())) {
				return 2;
			}
			if (ContratoServicioProfesionales* csp = dynamic_cast<ContratoServicioProfesionales*>(actual->getContrato())) {
				return 3;
			}
		}
		actual = actual->getSig();
	}
	return 0;
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
