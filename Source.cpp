#include "ListaEmpleado.h"
#include "ContenedorAviones.h"
#include "ListaContrato.h"

int main() {
	//Contenedores
	ListaEmpleado listaEmpleado;
	ContenedorAviones ContenedorAviones;
	ListaContrato listaContrato;

	//Objetos dinamicos
	Empleado* empleado = NULL;
	Empleado* empleado2 = NULL;
	Empleado* empleado3 = NULL;
	Empleado* empleado4 = NULL;
	Empleado* empleado5 = NULL;
	avion* aeronave = NULL;
	Fecha* fechaCreacion = NULL;
	Fecha* fCreacionCarga = NULL;
	Fecha* fCreacionComercial = NULL;
	aMilitar* aMili = NULL;
	aCarga* aCar = NULL;
	aComerciales* aCom = NULL;
	Fecha* fInicio = NULL;
	Fecha* fFinal = NULL;
	Fecha* fIni = NULL;
	Fecha* fI = NULL;
	Fecha* fF = NULL;
	Contrato* contrato = NULL;
	Contrato* contrato2 = NULL;
	Contrato* contrato3 = NULL;



	//Variables switches
	int opcion, opcionCase1, tipoCivil, tipoContrato, tipoEmpleado, tipoTripulante;

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

	//Variables para los contratos

	//Contrato Plazo Fijo
	int codCon;
	string descPue;
	double sal;
	int d,m,a;

	//Contrato Tiempo Indefinido
	string pl;
	int codPl;

	//Contrato Servicios Profesionales
	int hL;
	string tS;

	//Variables de Empleado
	string ced,nom, ocup;
	int ed, cC;
	
	//Tripulante
	int iA;
	
	//Piloto
	int aE;

	//Copiloto
	string naciona;

	//Azafata 
	string tel;

	//Administrativo
	string tiAd;

	//Miscelaneo
	string gradoEsc;
	string la;


	//Mantenimiento
	string idEm;
	int idAv;






	//Variables para las Fechas

	int dia, mes, anio;

	while (true) {
		cout << "1- Ingresar Empleados y Aviones\n" << endl;
		cout << "2- Mantenimiento\n" << endl;
		cout << "3- Reportes\n" << endl;
		cout << "4- Consultas\n" << endl;
		cout << "5- Salir\n" << endl;
		cin >> opcion;
		system("cls");
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
				cout << "Ingrese el tipo de avion (1. Militar, 2. Civil, 3. Menu Principal): " << endl;
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
			case 2:
				cout << "Ingrese el tipo de contrato que quiere ingresar (1-Contrato Plazo Fijo, 2- Contrato Tiempo Indefinido, 3- Contrato de Servicios Profesionales)" << endl;
				cin >> tipoContrato;
				switch (tipoContrato) {
				case 1:
					cout << "-------CONTRATO PLAZO FIJO-------" << endl << endl;
					cout << "Ingrese el codigo del contrato: " << endl;
					cin >> codCon;
					cout << "Ingrese una descripcion del puesto:" << endl << endl;
					cin >> descPue;
					cout << "Ingrese el salario: " << endl << endl;
					cin >> sal;
					cout << "Ingrese la fecha de inicio del contrato: " << endl << endl;
					cout << "Ingrese el dia: " << endl;
					cin >> d;
					cout << "Ingrese el mes: " << endl;
					cin >> m;
					cout << "Ingrese el anio: " << endl;
					cin >> a;
					fInicio = new Fecha(d, m, a);
					cout << "Ingrese la fecha de finalizacion del contrato: " << endl << endl;
					cout << "Ingrese el dia: " << endl;
					cin >> d;
					cout << "Ingrese el mes: " << endl;
					cin >> m;
					cout << "Ingrese el anio: " << endl;
					cin >> a;
					fFinal = new Fecha(d, m, a);
					contrato = new ContratoPlazoFijo(codCon, descPue, sal, fInicio, fFinal);
					listaContrato.insertaContrato(contrato);
					break;
				case 2:
					cout << "-------CONTRATO TIEMPO INDEFINIDO-------" << endl << endl;
					cout << "Ingrese el codigo del contrato: " << endl;
					cin >> codCon;
					cout << "Ingrese una descripcion del puesto:" << endl << endl;
					cin >> descPue;
					cout << "Ingrese el salario: " << endl << endl;
					cin >> sal;
					cout << "Ingrese la fecha de inicio del contrato: " << endl << endl;
					cout << "Ingrese el dia: " << endl;
					cin >> d;
					cout << "Ingrese el mes: " << endl;
					cin >> m;
					cout << "Ingrese el anio: " << endl;
					cin >> a;
					fIni = new Fecha(d, m, a);
					cout << "Ingrese la plaza del contrato" << endl;
					cin >> pl;
					cout << "Ingrese el codigo de la plaza" << endl;
					cin >> codPl;
					contrato2 = new ContratoTiempoIndefinido(codCon, descPue, sal, fIni, pl, codPl);
					listaContrato.insertaContrato(contrato2);
					break;
				case 3:
					cout << "-------CONTRATO DE SERVICIOS PROFESIONALES-------" << endl << endl;
					cout << "Ingrese el codigo del contrato: " << endl;
					cin >> codCon;
					cout << "Ingrese una descripcion del puesto:" << endl << endl;
					cin >> descPue;
					cout << "Ingrese el salario: " << endl << endl;
					cin >> sal;
					cout << "Ingrese la fecha de inicio del contrato: " << endl << endl;
					cout << "Ingrese el dia: " << endl;
					cin >> d;
					cout << "Ingrese el mes: " << endl;
					cin >> m;
					cout << "Ingrese el anio: " << endl;
					cin >> a;
					fI = new Fecha(d, m, a);
					cout << "Ingrese la fecha de finalizacion del contrato: " << endl << endl;
					cout << "Ingrese el dia: " << endl;
					cin >> d;
					cout << "Ingrese el mes: " << endl;
					cin >> m;
					cout << "Ingrese el anio: " << endl;
					cin >> a;
					fF = new Fecha(d, m, a);
					cout << "Ingrese las horas laborales" << endl;
					cin >> hL;
					cout << "Ingrese el tipo de servicio" << endl;
					cin >> tS;
					contrato3 = new ContratoServicioProfesionales(codCon, descPue, sal, fI, fF, hL, tS);
					listaContrato.insertaContrato(contrato3);
					break;
				default:
					cout << "Ingrese un numero valido" << endl;
					break;
				}
			case 3:
				cout << "Ingrese el tipo de Empleado que va quiere ingresar(1. Tripulnate, 2. Administrativos, 3.Miscelaneo)" << endl << endl;
				cin >> tipoEmpleado;
				switch (tipoEmpleado) {
				case 1:
					cout << "Ingrese el tipo de tripulante que desea ingresar(1. Piloto, 2.Copiloto, 3.Azafata):\n";
					cin >> tipoTripulante;
					switch (tipoTripulante) {
					case 1:
						cout << "Ingrese los detalles del piloto:\n";
						cout << "Ingrese la cedula del piloto: ";
						cin >> ced;
						cout << "Ingrese el nombre del piloto: ";
						cin >> nom;
						cout << "Ingrese la edad del piloto: ";
						cin >> ed;
						cout << "Ingrese la ocupacion del piloto: ";
						cin >> ocup;
						cout << "Ingrese los anios de experiencia del piloto: ";
						cin >> aE;
						cout << "Ingrese el codigo del contrato que quiere darle al Piloto" << endl;
						cin >> cC;
						if (listaContrato.buscarContrato(cC) == NULL) {
							cout << "No existe un contrato con ese codigo" << endl;
						}
						cout << "Ingrese un numero para asignarle un avion al Piloto" << endl;
						cin >> iA;
						if (ContenedorAviones.getAvion(iA) == NULL) {
							cout << "No existe un avion para ese indice" << endl;
						}
						empleado = new Piloto(ced, nom, ed, ocup, listaContrato.buscarContrato(cC), ContenedorAviones.getAvion(iA), aE);
						listaEmpleado.insertarEmpleado(empleado);
						break;
					case 2:
						cout << "Ingrese los detalles del Copiloto:\n";
						cout << "Ingrese la cedula del Copiloto: ";
						cin >> ced;
						cout << "Ingrese el nombre del Copiloto: ";
						cin >> nom;
						cout << "Ingrese la edad del Copiloto: ";
						cin >> ed;
						cout << "Ingrese la ocupacion del Copiloto: ";
						cin >> ocup;
						cout << "Ingrese la nacionalad del Copiloto: ";
						cin >> naciona;
						cout << "Ingrese el codigo del contrato que quiere darle al Copiloto" << endl;
						cin >> cC;
						if (listaContrato.buscarContrato(cC) == NULL) {
							cout << "No existe un contrato con ese codigo" << endl;
						}
						cout << "Ingrese un numero para asignarle un avion al Coiloto" << endl;
						cin >> iA;
						if (ContenedorAviones.getAvion(iA) == NULL) {
							cout << "No existe un avion para ese indice" << endl;
						}
						empleado2 = new Copiloto(ced, nom, ed, ocup, listaContrato.buscarContrato(cC), ContenedorAviones.getAvion(iA), naciona);
						listaEmpleado.insertarEmpleado(empleado2);
						break;
					case 3:
						cout << "Ingrese los detalles del Azafata:\n";
						cout << "Ingrese la cedula del Azafata: ";
						cin >> ced;
						cout << "Ingrese el nombre del Azafata: ";
						cin >> nom;
						cout << "Ingrese la edad del Azafata: ";
						cin >> ed;
						cout << "Ingrese la ocupacion del Azafata: ";
						cin >> ocup;
						cout << "Ingrese la telefono del Azafata: ";
						cin >> tel;
						cout << "Ingrese el codigo del contrato que quiere darle al Azafata" << endl;
						cin >> cC;
						if (listaContrato.buscarContrato(cC) == NULL) {
							cout << "No existe un contrato con ese codigo" << endl;
						}
						cout << "Ingrese un numero para asignarle un avion al Azafata" << endl;
						cin >> iA;
						if (ContenedorAviones.getAvion(iA) == NULL) {
							cout << "No existe un avion para ese indice" << endl;
						}
						empleado3 = new Azafata(ced, nom, ed, ocup, listaContrato.buscarContrato(cC), ContenedorAviones.getAvion(iA), tel);
						listaEmpleado.insertarEmpleado(empleado3);
						break;
					default:
						cout << "Ingrese un numero valido" << endl;
						break;
					}
				case 2:
					cout << "Ingrese los detalles del Administrativo:\n";
					cout << "Ingrese la cedula del Administrativo: ";
					cin >> ced;
					cout << "Ingrese el nombre del Administrativo: ";
					cin >> nom;
					cout << "Ingrese la edad del Administrativo: ";
					cin >> ed;
					cout << "Ingrese la ocupacion del Administrativo: ";
					cin >> ocup;
					cout << "Ingrese el titulo del Administrativo: ";
					cin >> tiAd;
					cout << "Ingrese el codigo del contrato que quiere darle al Administrativo" << endl;
					cin >> cC;
					if (listaContrato.buscarContrato(cC) == NULL) {
						cout << "No existe un contrato con ese codigo" << endl;
					}
					empleado4 = new Administrativos(ced, nom, ed, ocup, listaContrato.buscarContrato(cC), tiAd);
					listaEmpleado.insertarEmpleado(empleado4);
					break;
				case 3:
					cout << "Ingrese los detalles del Miscelaneo:\n";
					cout << "Ingrese la cedula del Miscelaneo: ";
					cin >> ced;
					cout << "Ingrese el nombre del Miscelaneo: ";
					cin >> nom;
					cout << "Ingrese la edad del Miscelaneo: ";
					cin >> ed;
					cout << "Ingrese la ocupacion del Miscelaneo: ";
					cin >> ocup;
					cout << "Ingrese el grado escolar del Miscelaneo: ";
					cin >> gradoEsc;
					cout << "Ingrese la labor de Miscelaneo";
					cin >> la;
					cout << "Ingrese el codigo del contrato que quiere darle al Miscelaneo" << endl;
					cin >> cC;
					if (listaContrato.buscarContrato(cC) == NULL) {
						cout << "No existe un contrato con ese codigo" << endl;
					}
					empleado5 = new Miscelaneos(ced, nom, ed, ocup, listaContrato.buscarContrato(cC), gradoEsc, la);
					listaEmpleado.insertarEmpleado(empleado5);
					break;
				default:
					cout << "Ingrese un numero valido" << endl;
					break;
				}
			}
		case 2:
			cout << "----------------MANTENIMIENTO-----------------" << endl << endl;
			cout << "(1. Para eliminar un empleado, 2. Para eliminar un avion)" << endl;
			int opcionEliminar;
			cin >> opcionEliminar;
			switch (opcionEliminar) {
			case 1:
				// Eliminar un empleado
				cout << "Ingrese el ID del empleado a eliminar: ";
				cin >> idEm;
				listaEmpleado.eliminarEmpleado(idEm);
				break;
			case 2:
				// Eliminar un avion
				cout << "Ingrese el ID del avion a eliminar: ";
				cin >> idAv;
				ContenedorAviones.eliminarAvion(idAv);
				break;
			default:
				cout << "Opcion invalida. Por favor, intente de nuevo.\n";
				break;
			}
			break;
		case 3:
			cout << "Reportes" << endl;
			cout << "1 - Reportes con contratos con sus empleados" << endl;
			cout << "2 - Reporte de aeronaves con su tripulacion" << endl;
			cout << "3 - Reporte de todas las aeronaves" << endl;
			cout << "4 - Reporte de todos los empleados" << endl;
			cout << "5 - Reporte de los pilotos para los aviones de carga" << endl;
			cout << "6 - Reporte de todos los aviones que tienen mas de 20 anios" << endl;
			cout << "7 - Reporte de todos los contrato de servicios profesionales" << endl;
			cout << "8 - Reporte de todos los contratos a plazo fijo" << endl;
			cout << "9 - Reporte de todos los contratos a tiempo indefinido" << endl;
			cout << "10 - Reporte de los contratos de plazo fijo que ya excedieron los 2 anios" << endl;
			cout << "11 - Reporte del avion de carga con mayor area" << endl;
			int opcionReporta;
			cin >> opcionReporta;
			switch (opcionReporta) {
			case 1:
				cout << "Reporte de contratos con sus empleados" << endl;
				listaEmpleado.mostrarContratos();
				break;
			case 2:
				cout << "Reporte de aeronaves con su tripulacion" << endl;
				listaEmpleado.reporteAeronavesTripulacion();
				break;
			case 3:
				cout << "Reporte de todas las aeronaves" << endl;
				ContenedorAviones.toString();
				break;
			case 4:
				cout << "Reporte de todos los empleados" << endl;
				listaEmpleado.toString();
				break;
			case 5:
				cout << "Reporte de los pilotos para los aviones de carga" << endl;
				listaEmpleado.reportedePilotosParaAvionesdeCarga();
				break;
			case 6:
				cout << "Reporte de todos los aviones que tienen mas de 20 anios" << endl;
				ContenedorAviones.reporteDeAvionesConmasde20anios();
				break;
			case 7:
				cout << "Reporte de todos los contrato de servicios profesionales" << endl;
				listaEmpleado.reporteDeTodosLosContratosdeServicioProfesionales();
				break;
			case 8:
				cout << "Reporte de todos los contratos a plazo fijo" << endl;
				listaEmpleado.reporteDeTodosLosContratosdePlazoFijo();
				break;
			case 9:
				cout << "Reporte de todos los contratos a tiempo indefinido" << endl;
				listaEmpleado.reporteATodosLosContratosaTiempoIndefinido();
				break;
			case 10:
				cout << "Reporte de los contratos de plazo fijo que ya excedieron los 2 anios" << endl;
				listaEmpleado.reportedeloscontratosplazofijoqueyaexcedieronlos2anios();
				break;
			case 11:
				cout << "Reporte del avion de carga con mayor area" << endl;
				ContenedorAviones.getAvionCarga();
				break;
			default:
				cout << "Ingrese un numero valido" << endl;
				break;
			}
			break;
		case 4:
			cout << "-----CONSULTA------" << endl;
			cout << "1 - Consulta de nave por medio de cedula del empleado" << endl;
			cout << "2 - Consulta con numero de contrato, para saber su tipo de contrato" << endl;
			cout << "3 - Consulta de aeronave civil con ayuda de su numero de placa" << endl;
			int opcionConsulta;
			cin >> opcionConsulta;
			switch (opcionConsulta) {
			case 1:
				cout << "Ingrese la cedula del empleado" << endl;
				 cin>>ced;
				listaEmpleado.consultadetripulantepormediodecedulaydevuelvesuavion(ced);
				break;
			case 2:
				cout << "Ingrese el numero de contrato" << endl;
				cin >> codCon;
				listaEmpleado.consultaporuncontratoconayudadelnumerodecontratoyeltipodecontratoquepertenece(codCon);
				break;
			case 3:
				cout << "Ingrese el numero de placa" << endl;
				cin >> nP;
				ContenedorAviones.informaciondelaaeronavedeAviacioncivilconsuplaca(nP);
				break;
			default:
				cout << "Ingrese un numero valido" << endl;
				break;
			}
			break;
		case 5:
			return 0;
		}
	}


	delete empleado;
	delete empleado2;
	delete empleado3;
	delete empleado4;
	delete empleado5;
	delete aeronave;
	delete fechaCreacion;
	delete fCreacionCarga;
	delete fCreacionComercial;
	delete aMili;
	delete aCar;
	delete aCom;
	delete fInicio;
	delete fFinal;
	delete fIni;
	delete fI;
	delete fF;
	delete contrato;
	delete contrato2;
	delete contrato3;


	return 0;
}





