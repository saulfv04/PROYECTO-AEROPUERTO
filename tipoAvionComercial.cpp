#include "tipoAvionComercial.h"

tipoAvionComercial::tipoAvionComercial()
{
}

string tipoAvionComercial::darTipo(int t)
{
	stringstream s;
	switch (t) {
	case 310:
		s << "Airbus A310" << endl;
	case 747:
		s << "Boeing 747" << endl;
	case 767:
		s << "Boeing 767" << endl;
	case 777:
		s << "Boeing 777" << endl;
	case 130:
		s << "Concorde" << endl;
	case 850:
		s << "DC-8-50" << endl;
	}
	return s.str();
}
