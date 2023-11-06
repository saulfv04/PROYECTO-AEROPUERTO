#pragma once
#include "avion.h"
class aCivil :public avion
{
protected:
	int numeroPlaca;
public:

	aCivil(Fecha*,double,int);
	virtual ~aCivil();

	void setNumeroPlaca(int);
	void setTipoAvion(string);

	int getNumeroPlaca();
	string getTipoAvion();

	virtual string toString();



};

