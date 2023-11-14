#include "aComerciales.h"

aComerciales::aComerciales(Fecha* fe, double dr, int numP, int nC , bool pU, bool dP) : aCivil(fe,dr,numP), numeroCategoria(nC), pasilloUnico(pU), doblePasillo(dP)
{
	tipo = t->darTipo(nC);
}

aComerciales::~aComerciales()
{
	delete t;
}

void aComerciales::setNumeroCategoria(int nC)
{
	this->numeroCategoria = nC;
}

void aComerciales::setPasilloUnico(bool pU)
{
	this->pasilloUnico = pU;
}

void aComerciales::setDoblePiso(bool dP)
{
	this->doblePasillo = dP;
}

void aComerciales::setTipo(int cat)
{
	tipo = t->darTipo(cat);
}

string aComerciales::getTipo()
{
	return tipo;
}

int aComerciales::getNumeroCategoria()
{
	return numeroCategoria;
}

bool aComerciales::getPasilloUnico()
{
	return pasilloUnico;
}

bool aComerciales::getDoblePiso()
{
	return doblePasillo;
}

string aComerciales::toString()
{
	stringstream s;
	s << "---------AVION COMERCIAL----------" << endl << endl;
	s << "Fecha de Creacion: " << fechaCreacion->toString() << endl;
	
	s << " Distacia Recorrida: " << distanciaRecorrida << endl;

	s << "Numero de Categoria: " << numeroCategoria << endl;
	if (pasilloUnico == true) {
		s << " Pasillo Unico: SI " << endl;
	}
	else {
		s << " Doble Pasillo: SI " << endl;
	}
	s << " Tipo de avion: " << tipo << endl;
	
	return s.str();
}

