#include "aMilitar.h"

aMilitar::aMilitar(Fecha* f, double db, double vM, string cA) :avion(f, db){
	velocidadMax = vM;
	categoriaAv = cA;
	tipo = t->darCategoria(cA);
}

aMilitar::~aMilitar()
{
	delete t;
}

void aMilitar::setVelocidadMax(double vM)
{
	this->velocidadMax = vM;
}

void aMilitar::setTipoAvionMilitar(string cat)
{
	tipo = t->darCategoria(cat);
}

void aMilitar::setCategoriaAv(string cA)
{
	this->categoriaAv = cA;
}

double aMilitar::getVelocidadMax()
{
	return velocidadMax;
}

string aMilitar::gettipoAvionMilitar()
{
	return tipo;
}

string aMilitar::getcategoriaAv()
{
	return categoriaAv;
}

string aMilitar::toString()
{
	stringstream s;

	s << "Fecha de Creacion: " << fechaCreacion->toString() << endl;
	s << " Distacia Recorrida: " << distanciaRecorrida << endl;
	s << "Velocidad Maxima: " << velocidadMax << endl;
	s << " Tipo de Avion Militar: " << tipo << endl;
	s << " Categoria de Avion: " << categoriaAv << endl;

	return s.str();
}
