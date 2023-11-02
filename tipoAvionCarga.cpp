#include "tipoAvionCarga.h"

tipoAvionCarga::tipoAvionCarga()
{
}

string tipoAvionCarga::darTipo(string cat)
{
	stringstream s;
	if (cat == "A319") {
		s << "AIRBUS 319" << endl;
	}

	if (cat == "A320") {
		s << "AIRBUS 320" << endl;
	}
	
	if (cat == "A321") {
		s << "AIRBUS 321 " << endl;
	}

	if (cat == "A330") {
		s << "AIRBUS 330" << endl;
	}
	
	if (cat == "A340") {
		s << "AIRBUS 340" << endl;
	}

	if (cat == "B737") {
		s << "AIRBUS 737" << endl;
	}
	
	if (cat == "B777") {
		s << "AIRBUS B777" << endl;
	}


	return s.str();
}
