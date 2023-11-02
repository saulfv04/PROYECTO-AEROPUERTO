#pragma once
#include "avion.h"
class aCivil :public avion
{
protected:
	int numeroPlaca;
	string tipoAvion;
public:

	aCivil(Fecha*,double,int,string);
	virtual ~aCivil();

	void setNumeroPlaca(int);
	void setTipoAvion(string);

	int getNumeroPlaca();
	string getTipoAvion();

	virtual string toString();



};

