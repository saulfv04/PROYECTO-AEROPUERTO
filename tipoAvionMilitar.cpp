#include "tipoAvionMilitar.h"

tipoAvionMilitar::tipoAvionMilitar()
{
}

string tipoAvionMilitar::darCategoria(string cat)
{
	stringstream s;
	if (cat == "M800") {
		s << "Airbus 300-600" << endl;
	}

	if (cat == "M130") {
		s << "ANTONOV" << endl;
	}

	return s.str();
}
