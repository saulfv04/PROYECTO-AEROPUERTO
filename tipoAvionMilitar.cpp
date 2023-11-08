#include "tipoAvionMilitar.h"

tipoAvionMilitar::tipoAvionMilitar()
{
}

string tipoAvionMilitar::darCategoria(string cat)
{
	string aux;
	if (cat == "M800") {
		 aux = "Airbus 300-600";
	}
	else if (cat == "M130") {
		aux = "ANTONOV"; 
	}

	return aux;
}
