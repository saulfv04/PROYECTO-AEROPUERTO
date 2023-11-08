#include "ListaEmpleado.h"
#include "ContenedorAviones.h"

int main() {
	//Contenedores
	ListaEmpleado listaEmpleado;
	ContenedorAviones ContenedorAviones;

	//Objetos dinamicos
	Empleado* empleado = NULL;
	avion* aeronave = NULL;
	Fecha* fechaCreacion = NULL;
	Fecha* fCreacionCarga = NULL;
	Fecha* fCreacionComercial = NULL;
	aMilitar* aMili = NULL;
	aCarga* aCar = NULL;
	aComerciales* aCom = NULL;


	//Variables switches
	int opcion, opcionCase1, tipoCivil;

	//Variables para el avion

		//Avion Militar
	double distanciaRecorrida, velocidadMax;
	string categoriaAv;

	//Avion Civil

		//Avion Carga
	double diRE, alPuer, anPuer;
	int nP;
	bool esc, puerLa;
	string cat;
	//Avion Comercial
	int numP, numC;
	double disRec;
	bool pUnico, pDoble;





	//Variables para las Fechas

	int dia, mes, anio;

	while (true) {
		cout << "1- Ingresar Empleados y Aviones\n" << endl;
		cout << "2- Mantenimiento\n" << endl;
		cout << "3- Reportes\n" << endl;
		cout << "4- Consultas\n" << endl;
		cout << "5- Salir\n" << endl;
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << "-----------INGRESO DE EMPLEADOS Y AVIONES-------------" << endl << endl;
			cout << "1- Ingresar Aeronaves\n" << endl;
			cout << "2- Ingresar Contratos\n" << endl;
			cout << "3- Ingresar Emplados\n" << endl;
			cout << "4- Menu Principal\n" << endl;
			cin >> opcionCase1;
			switch (opcionCase1) {
			case 1:
				cout << "Ingrese el tipo de avion (1. Militar, 2. Civil, 3. Menu Principal): "<<endl;
				int tAv;
				cin >> tAv;
				switch (tAv) {
				case 1:
					cout << "Ingrese los detalles del avion militar:\n";
					cout << "Ingrese la fecha de creacion del avion: ";
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					fechaCreacion = new Fecha(dia, mes, anio);
					cout << "Distancia recorrida: ";
					cin >> distanciaRecorrida;
					cout << "Velocidad maxima: ";
					cin >> velocidadMax;
					cout << "Categoria de avion: (string)";
					cin >> categoriaAv;
					aeronave = new aMilitar(fechaCreacion, distanciaRecorrida, velocidadMax, categoriaAv);
					aMili = dynamic_cast<aMilitar*>(aeronave);
					ContenedorAviones.insertarAvion(aMili);
					system("cls");

					break;
				case 2:
					cout << "Ingrese el tipo de avion civil (1. Carga, 2. Comercial): ";
					cin >> tipoCivil;
					switch (tipoCivil) {
					case 1:
						cout << "Ingrese los detalles del avion de carga:\n";
						cout << "Ingrese la fecha de creacion del avion: ";
						cout << "Ingrese el dia: ";
						cin >> dia;
						cout << "Ingrese el mes: ";
						cin >> mes;
						cout << "Ingrese el anio: ";
						cin >> anio;
						fCreacionCarga = new Fecha(dia, mes, anio);
						cout << "Ingrese la distancia recorrida: ";
						cin >> diRE;
						cout << "Ingrese el numero de placa: ";
						cin >> nP;
						cout << "Altura de la puerta: ";
						cin >> alPuer;
						cout << "Anchura de la puerta: ";
						cin >> anPuer;
						cout << "Escotilla (1 para si, 0 para no): ";
						cin >> esc;
						cout << "Puerta lateral (1 para si, 0 para no): ";
						cin >> puerLa;
						cout << "Categoria: ";
						getline(cin, cat);
						aeronave = new aCarga(fCreacionCarga, diRE, nP, alPuer, anPuer, esc, puerLa, cat);
						aCar = dynamic_cast<aCarga*>(aeronave);
						aCar->setTipo(cat);
						ContenedorAviones.insertarAvion(aCar);
						break;
					case 2:
						cout << "Ingrese los detalles del avion comercial:\n";
						cout << "Ingrese la fecha de creacion del avion: ";
						cout << "Ingrese el dia: ";
						cin >> dia;
						cout << "Ingrese el mes: ";
						cin >> mes;
						cout << "Ingrese el anio: ";
						cin >> anio;
						fCreacionComercial = new Fecha(dia, mes, anio);
						cout << "Ingrese la distancia recorrida: ";
						cin >> disRec;
						cout << "Ingrese el numero de placa: ";
						cin >> numP;
						cout << "Ingrese el numero de categoria: ";
						cin >> numC;
						cout << "Pasillo unico (1 para si, 0 para no): ";
						cin >> pUnico;
						cout << "Doble pasillo (1 para si, 0 para no): ";
						cin >> pDoble;
						aeronave = new aComerciales(fCreacionComercial, disRec, numP, numC, pUnico, pDoble);
						aCom = dynamic_cast<aComerciales*>(aeronave);
						aCom->setTipo(numC);
						ContenedorAviones.insertarAvion(aCom);
						break;
					default:
						cout << "Ingrese un numero valido" << endl;
						break;
					}
				}
			}
		case 2:
			ContenedorAviones.toString();
			break;
		default:
			cout << "Ingrese un numero valido" << endl;
			break;
		}
	}
	return 0;
}





