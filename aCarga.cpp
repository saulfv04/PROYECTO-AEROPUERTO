#include "aCarga.h"

aCarga::aCarga(Fecha* f, double dr, int numP, double ap, double anP, bool es, bool pL, string ca) :	
aCivil(f, dr, numP), alturaPuerta(ap), anchuraPuerta(anP), escotilla(es), puertaLateral(pL), categoria(ca)
{
	tipo = t->darTipo(ca);

}

aCarga::~aCarga()
{
}

void aCarga::setAlturaPuerta(double ap)
{
	alturaPuerta = ap;
}

void aCarga::setAnchuraPuerta(double anP)
{
	anchuraPuerta = anP;
}

void aCarga::setEscotilla(bool es)
{
	escotilla = es;
}

void aCarga::setPuertaLateral(bool pL)
{
	puertaLateral = pL;
}

void aCarga::setCateoria(string ca)
{
	categoria = ca;
}

void aCarga::setTipo(string c)
{
	tipo = t->darTipo(c);
}

string aCarga::getTipo()
{
	return tipo;
}

string aCarga::getCategoria()
{
	return categoria;
}

double aCarga::getAlturaPuerta()
{
	return alturaPuerta;
}

double aCarga::getAnchuraPuerta()
{
	return anchuraPuerta;
}

bool aCarga::getEscotilla()
{
	return escotilla;
}

bool aCarga::getPuertalLateral()
{
	return puertaLateral;
}

string aCarga::toString()
{
	stringstream s;

	s << "Altura puerta: " << alturaPuerta << endl;
	s << " Anchura de la Puerta: " << anchuraPuerta << endl;
	if (escotilla == true) {
		s << "Escotilla: SI " << endl;
	}
	else
	{
		s << "Escotilla: NO " << endl;
	}
	if (puertaLateral == true) {
		s << "Puerta lateral: SI " << endl;
	}
	else
	{
		s << "Puerta lateral: NO " << endl;
	}
	s << " Categoria: " << categoria << endl;
	s << " Tipo: " << tipo << endl;

	return s.str();
}

double aCarga::darCapacidad(){
	return anchuraPuerta*alturaPuerta;}


