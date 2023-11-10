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
	

	int getNumeroPlaca();
	

	virtual string toString() = 0;



};

