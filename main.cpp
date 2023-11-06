#include "ListaEmpleado.h"
#include "ContenedorAviones.h"

int main() {
    ListaEmpleado listaEmpleado;
    ContenedorAviones ContenedorAviones;

	Empleado* empleado = NULL;
	avion* aeronave = NULL;
	string cedula, nombre, ocupacion, nacionalidad, telefono, tituloAdminis, gradoEsc,labor;
	int edad, aniosExperiencia;
	Contrato* contrato;
	int codContrato, codPlaza, horarioLaboral;
	string descPuesto, plaza, tipoServicio;
	double salario;
	Fecha* fInicio;
	Fecha* fFinal;

    double distanciaRecorrida;
	double velocidadMax;
	string categoriaAv;
	double alturaPuerta;
    double anchuraPuerta;
    bool escotilla;
    bool puertaLateral;
    string categoria;
	int numPlaca;


	int numeroCategoria;
	bool pasilloUnico;
	bool doblePasillo;

	




    while (true) {
        cout << "1. Ingresar empleado, aeronave y contrato\n";
        cout << "2. Salir\n";
        cout << "Ingrese su opcion: ";
        int opcion;
        cin >> opcion;

    switch (opcion) {
    case 1:
    	cout << "Ingrese el tipo de empleado (1. Tripulante, 2. Administrativo, 3. Miscelaneo) o 4. para un Avion: ";
   	 	int tipoEmpleado;
    	cin >> tipoEmpleado;
    	Empleado* empleado = NULL;
    	switch (tipoEmpleado) {
    	case 1:
        	cout << "Ingrese el tipo de tripulante que desea ingresar(1. Piloto, 2.Copiloto, 3.Azafata):\n";
        	int tipoTripulante;
			cin>>tipoTripulante;
			switch (tipoTripulante) {
			case 1:
				cout << "Ingrese los detalles del piloto:\n";
				cout << "Ingrese la cedula del piloto: ";
				getline(cin, cedula);
				cout << "Ingrese el nombre del piloto: ";
				getline(cin, nombre);
				cout << "Ingrese la edad del piloto: ";
				cin >> edad;
				cout << "Ingrese la ocupacion del piloto: ";
				getline(cin, ocupacion);
				cout << "Ingrese los anios de experiencia del piloto: ";
				cin >> aniosExperiencia;
				cout << "Ingrese el tipo de contrato que va a tener el piloto(1. Contrato a plazo fijo, 2. Contrato a tiempo indefinido, 3.Contrato de Servicios Profesionales): ";
				int tipoContrato;
				cin >> tipoContrato;
				switch (tipoContrato) {
				case 1:
					cout << "Ingrese el codigo del contrato: ";
					cin >> codContrato;
					cout << "Ingrese la descripcion del puesto: ";
					getline(cin, descPuesto);
					cout << "Ingrese el salario del piloto: ";
					cin >> salario;
					cout << "Ingrese la fecha de inicio del contrato: ";
					int dia, mes, anio;
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaInicio = new Fecha(dia, mes, anio);
					cout << "Ingrese la fecha de finalizacion del contrato: ";
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaFinal = new Fecha(dia, mes, anio);
					Contrato* contrato = new ContratoPlazoFijo(codContrato, descPuesto, salario, fechaInicio, fechaFinal);
					break;
				case 2:
					cout << "Ingrese el codigo del contrato: ";
					cin >> codContrato;
					cout << "Ingrese la descripcion del puesto: ";
					getline(cin, descPuesto);
					cout << "Ingrese el salario del piloto: ";
					cin >> salario;
					cout << "Ingrese la plaza del piloto: ";
					getline(cin, plaza);
					cout << "Ingrese el codigo de la plaza: ";
					cin >> codPlaza;
					cout << "Ingrese la fecha de inicio del contrato: ";
					int dia, mes, anio;
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaInicio = new Fecha(dia, mes, anio);
					Contrato* contrato = new ContratoTiempoIndefinido(codContrato, descPuesto, salario, fechaInicio, plaza, codPlaza);
					break;
				case 3:
					cout << "Ingrese el codigo del contrato: ";
					cin >> codContrato;
					cout << "Ingrese la descripcion del puesto: ";
					getline(cin, descPuesto);
					cout << "Ingrese el salario del piloto: ";
					cin >> salario;
					cout << "Ingrese el horario laboral del piloto: ";
					cin >> horarioLaboral;
					cout << "Ingrese el tipo de servicio del piloto: ";
					getline(cin, tipoServicio);
					cout << "Ingrese la fecha de inicio del contrato: ";
					int dia, mes, anio;
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaInicio = new Fecha(dia, mes, anio);
					cout << "Ingrese la fecha de finalizacion del contrato: ";
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaFinal = new Fecha(dia, mes, anio);
					Contrato* contrato = new ContratoServicioProfesionales(codContrato, descPuesto, salario, fechaInicio, fechaFinal, horarioLaboral, tipoServicio);
					break;
					cout << "Ingrese el indice del avion que desea asignar al piloto (0-14): ";
					int indiceAvion;
					cin >> indiceAvion;
					if (indiceAvion < 0 || indiceAvion >= 15) {
						cout << "Indice de avion invalido. Por favor, intente de nuevo.\n";
					}
				default:
					cout << "Tipo de contrato invalido. Por favor, intente de nuevo.\n";
					break;
				cout << "Ingrese el indice del avion que desea asignar al piloto (0-14): ";
				int indiceAvion;
				cin >> indiceAvion;
				if (indiceAvion < 0 || indiceAvion >= 15) {
					cout << "Indice de avion invalido. Por favor, intente de nuevo.\n";
				}
				avion* avion = ContenedorAviones.getAvion(indiceAvion);
				empleado = new Piloto(cedula, nombre, edad, ocupacion, contrato, avion, aniosExperiencia);
				break;
			}
			case 2:
				cout << "Ingrese los detalles del Copiloto:\n";
				cout << "Ingrese la cedula del Copiloto: ";
				getline(cin, cedula);
				cout << "Ingrese el nombre del Copiloto: ";
				getline(cin, nombre);
				cout << "Ingrese la edad del Copiloto: ";
				cin >> edad;
				cout << "Ingrese la ocupacion del Copiloto: ";
				getline(cin, ocupacion);
				cout << "Ingrese la nacionalidad del Copiloto: ";
				cin >> nacionalidad;
				cout << "Ingrese el tipo de contrato que va a tener el Copiloto(1. Contrato a plazo fijo, 2. Contrato a tiempo indefinido, 3.Contrato de Servicios Profesionales): ";
				int tipoContrato;
				cin >> tipoContrato;
				switch (tipoContrato) {
				case 1:
					cout << "Ingrese el codigo del contrato: ";
					cin >> codContrato;
					cout << "Ingrese la descripcion del puesto: ";
					getline(cin, descPuesto);
					cout << "Ingrese el salario del Copiloto: ";
					cin >> salario;
					cout << "Ingrese la fecha de inicio del contrato: ";
					int dia, mes, anio;
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaInicio = new Fecha(dia, mes, anio);
					cout << "Ingrese la fecha de finalizacion del contrato: ";
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaFinal = new Fecha(dia, mes, anio);
					Contrato* contrato = new ContratoPlazoFijo(codContrato, descPuesto, salario, fechaInicio, fechaFinal);
					break;
				case 2:
					cout << "Ingrese el codigo del contrato: ";
					cin >> codContrato;
					cout << "Ingrese la descripcion del puesto: ";
					getline(cin, descPuesto);
					cout << "Ingrese el salario del Copiloto: ";
					cin >> salario;
					cout << "Ingrese la plaza del Copiloto: ";
					getline(cin, plaza);
					cout << "Ingrese el codigo de la plaza: ";
					cin >> codPlaza;
					cout << "Ingrese la fecha de inicio del contrato: ";
					int dia, mes, anio;
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaInicio = new Fecha(dia, mes, anio);
					Contrato* contrato = new ContratoTiempoIndefinido(codContrato, descPuesto, salario, fechaInicio, plaza, codPlaza);
					break;
				case 3:
					cout << "Ingrese el codigo del contrato: ";
					cin >> codContrato;
					cout << "Ingrese la descripcion del puesto: ";
					getline(cin, descPuesto);
					cout << "Ingrese el salario del Copiloto: ";
					cin >> salario;
					cout << "Ingrese el horario laboral del Copiloto: ";
					cin >> horarioLaboral;
					cout << "Ingrese el tipo de servicio del Copiloto: ";
					getline(cin, tipoServicio);
					cout << "Ingrese la fecha de inicio del contrato: ";
					int dia, mes, anio;
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaInicio = new Fecha(dia, mes, anio);
					cout << "Ingrese la fecha de finalizacion del contrato: ";
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaFinal = new Fecha(dia, mes, anio);
					Contrato* contrato = new ContratoServicioProfesionales(codContrato, descPuesto, salario, fechaInicio, fechaFinal, horarioLaboral, tipoServicio);
					break;
				default:
					cout << "Tipo de contrato invalido. Por favor, intente de nuevo.\n";
					break;
				}
				cout << "Ingrese el indice del avion que desea asignar al Copiloto (0-14): ";
				int indiceAvion;
				cin >> indiceAvion;
				if (indiceAvion < 0 || indiceAvion >= 15) {
					cout << "Indice de avion invalido. Por favor, intente de nuevo.\n";
				}
				avion* avi = ContenedorAviones.getAvion(indiceAvion);
				empleado = new Copiloto(cedula, nombre, edad, ocupacion, contrato, avi, nacionalidad);
				break;
			case 3:
				cout << "Ingrese los detalles de la Azafata:\n";
				cout << "Ingrese la cedula de la Azafata: ";
				getline(cin, cedula);
				cout << "Ingrese el nombre de la Azafata: ";
				getline(cin, nombre);
				cout << "Ingrese la edad de la Azafata: ";
				cin >> edad;
				cout << "Ingrese la ocupacion de la Azafata: ";
				getline(cin, ocupacion);
				cout << "Ingrese el telefono de la Azafata: ";
				getline(cin, telefono);
				cout << "Ingrese el tipo de contrato que va a tener la Azafata(1. Contrato a plazo fijo, 2. Contrato a tiempo indefinido, 3.Contrato de Servicios Profesionales): ";
				int tipoContrato;
				cin >> tipoContrato;
				switch (tipoContrato) {
				case 1:
					cout << "Ingrese el codigo del contrato: ";
					cin >> codContrato;
					cout << "Ingrese la descripcion del puesto: ";
					getline(cin, descPuesto);
					cout << "Ingrese el salario de la Azafata: ";
					cin >> salario;
					cout << "Ingrese la fecha de inicio del contrato: ";
					int dia, mes, anio;
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaInicio = new Fecha(dia, mes, anio);
					cout << "Ingrese la fecha de finalizacion del contrato: ";
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaFinal = new Fecha(dia, mes, anio);
					Contrato* contrato = new ContratoPlazoFijo(codContrato, descPuesto, salario, fechaInicio, fechaFinal);
					break;
				case 2:
					cout << "Ingrese el codigo del contrato: ";
					cin >> codContrato;
					cout << "Ingrese la descripcion del puesto: ";
					getline(cin, descPuesto);
					cout << "Ingrese el salario de la Azafata: ";
					cin >> salario;
					cout << "Ingrese la plaza del Azafata: ";
					getline(cin, plaza);
					cout << "Ingrese el codigo de la plaza: ";
					cin >> codPlaza;
					cout << "Ingrese la fecha de inicio del contrato: ";
					int dia, mes, anio;
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaInicio = new Fecha(dia, mes, anio);
					Contrato* contrato = new ContratoTiempoIndefinido(codContrato, descPuesto, salario, fechaInicio, plaza, codPlaza);
					break;
				case 3:
					cout << "Ingrese el codigo del contrato: ";
					cin >> codContrato;
					cout << "Ingrese la descripcion del puesto: ";
					getline(cin, descPuesto);
					cout << "Ingrese el salario de la: ";
					cin >> salario;
					cout << "Ingrese el horario laboral del Copiloto: ";
					cin >> horarioLaboral;
					cout << "Ingrese el tipo de servicio del Copiloto: ";
					getline(cin, tipoServicio);
					cout << "Ingrese la fecha de inicio del contrato: ";
					int dia, mes, anio;
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaInicio = new Fecha(dia, mes, anio);
					cout << "Ingrese la fecha de finalizacion del contrato: ";
					cout << "Ingrese el dia: ";
					cin >> dia;
					cout << "Ingrese el mes: ";
					cin >> mes;
					cout << "Ingrese el anio: ";
					cin >> anio;
					Fecha* fechaFinal = new Fecha(dia, mes, anio);
					Contrato* contrato = new ContratoServicioProfesionales(codContrato, descPuesto, salario, fechaInicio, fechaFinal, horarioLaboral, tipoServicio);
					break;
				default:
					cout << "Tipo de contrato invalido. Por favor, intente de nuevo.\n";
					break;
				}
			cout << "Ingrese el indice del avion que desea asignar a la Azafata (0-14): ";
			int indiceAvion;
			cin >> indiceAvion;
			if (indiceAvion < 0 || indiceAvion >= 15) {
				cout << "Indice de avion invalido. Por favor, intente de nuevo.\n";
			}
			avion* a = ContenedorAviones.getAvion(indiceAvion);
			empleado = new Azafata(cedula, nombre, edad, ocupacion, contrato, a, telefono);
			break;
		}
    	case 2:
        	cout << "Ingrese los detalles del administrativo:\n";
			cout << "Ingrese la cedula del administrativo: ";
			getline(cin, cedula);
			cout << "Ingrese el nombre del administrativo: ";
			getline(cin, nombre);
			cout << "Ingrese la edad del administrativo: ";
			cin >> edad;
			cout << "Ingrese la ocupacion del administrativo: ";
			getline(cin, ocupacion);
			cout << "Ingrese el titulo administrativo: ";
			getline(cin, tituloAdminis);
			cout << "Ingrese el tipo de contrato que va a tener el administrativo(1. Contrato a plazo fijo, 2. Contrato a tiempo indefinido, 3.Contrato de Servicios Profesionales): ";
			int tipoContrato;
			cin >> tipoContrato;
			switch (tipoContrato) {
			case 1:
				cout << "Ingrese el codigo del contrato: ";
				cin >> codContrato;
				cout << "Ingrese la descripcion del puesto: ";
				getline(cin, descPuesto);
				cout << "Ingrese el salario del Copiloto: ";
				cin >> salario;
				cout << "Ingrese la fecha de inicio del contrato: ";
				int dia, mes, anio;
				cout << "Ingrese el dia: ";
				cin >> dia;
				cout << "Ingrese el mes: ";
				cin >> mes;
				cout << "Ingrese el anio: ";
				cin >> anio;
				Fecha* fechaInicio = new Fecha(dia, mes, anio);
				cout << "Ingrese la fecha de finalizacion del contrato: ";
				cout << "Ingrese el dia: ";
				cin >> dia;
				cout << "Ingrese el mes: ";
				cin >> mes;
				cout << "Ingrese el anio: ";
				cin >> anio;
				Fecha* fechaFinal = new Fecha(dia, mes, anio);
				Contrato* contrato = new ContratoPlazoFijo(codContrato, descPuesto, salario, fechaInicio, fechaFinal);
				break;
			case 2:
				cout << "Ingrese el codigo del contrato: ";
				cin >> codContrato;
				cout << "Ingrese la descripcion del puesto: ";
				getline(cin, descPuesto);
				cout << "Ingrese el salario del Copiloto: ";
				cin >> salario;
				cout << "Ingrese la plaza del Copiloto: ";
				getline(cin, plaza);
				cout << "Ingrese el codigo de la plaza: ";
				cin >> codPlaza;
				cout << "Ingrese la fecha de inicio del contrato: ";
				int dia, mes, anio;
				cout << "Ingrese el dia: ";
				cin >> dia;
				cout << "Ingrese el mes: ";
				cin >> mes;
				cout << "Ingrese el anio: ";
				cin >> anio;
				Fecha* fechaInicio = new Fecha(dia, mes, anio);
				Contrato* contrato = new ContratoTiempoIndefinido(codContrato, descPuesto, salario, fechaInicio, plaza, codPlaza);
				break;
			case 3:
				cout << "Ingrese el codigo del contrato: ";
				cin >> codContrato;
				cout << "Ingrese la descripcion del puesto: ";
				getline(cin, descPuesto);
				cout << "Ingrese el salario del Copiloto: ";
				cin >> salario;
				cout << "Ingrese el horario laboral del Copiloto: ";
				cin >> horarioLaboral;
				cout << "Ingrese el tipo de servicio del Copiloto: ";
				getline(cin, tipoServicio);
				cout << "Ingrese la fecha de inicio del contrato: ";
				int dia, mes, anio;
				cout << "Ingrese el dia: ";
				cin >> dia;
				cout << "Ingrese el mes: ";
				cin >> mes;
				cout << "Ingrese el anio: ";
				cin >> anio;
				Fecha* fechaInicio = new Fecha(dia, mes, anio);
				cout << "Ingrese la fecha de finalizacion del contrato: ";
				cout << "Ingrese el dia: ";
				cin >> dia;
				cout << "Ingrese el mes: ";
				cin >> mes;
				cout << "Ingrese el anio: ";
				cin >> anio;
				Fecha* fechaFinal = new Fecha(dia, mes, anio);
				Contrato* contrato = new ContratoServicioProfesionales(codContrato, descPuesto, salario, fechaInicio, fechaFinal, horarioLaboral, tipoServicio);
				break;
			default:
				cout << "Tipo de contrato invalido. Por favor, intente de nuevo.\n";
				break;
			}
        	empleado = new Administrativos(cedula, nombre, edad, ocupacion, contrato, tituloAdminis);
        	break;
    	case 3:
        			cout << "Ingrese los detalles del miscelaneo:\n";
					cout << "Ingrese la cedula del miscelaneo: ";
					getline(cin, cedula);
					cout << "Ingrese el nombre del miscelaneo: ";
					getline(cin, nombre);
					cout << "Ingrese la edad del miscelaneo: ";
					cin >> edad;
					cout << "Ingrese la ocupacion del miscelaneo: ";
					getline(cin, ocupacion);
					cout << "Ingrese el grado escolar del miscelaneo: ";
					getline(cin, gradoEsc);
					cout << "Ingrese la labor de miscelaneo: ";
					getline(cin, labor);
					cout << "Ingrese el tipo de contrato que va a tener el administrativo(1. Contrato a plazo fijo, 2. Contrato a tiempo indefinido, 3.Contrato de Servicios Profesionales): ";
					int tipoContrato;
					cin >> tipoContrato;
					switch (tipoContrato) {
					case 1:
						cout << "Ingrese el codigo del contrato: ";
						cin >> codContrato;
						cout << "Ingrese la descripcion del puesto: ";
						getline(cin, descPuesto);
						cout << "Ingrese el salario del Miscelaneo: ";
						cin >> salario;
						cout << "Ingrese la fecha de inicio del contrato: ";
						int dia, mes, anio;
						cout << "Ingrese el dia: ";
						cin >> dia;
						cout << "Ingrese el mes: ";
						cin >> mes;
						cout << "Ingrese el anio: ";
						cin >> anio;
						Fecha* fechaInicio = new Fecha(dia, mes, anio);
						cout << "Ingrese la fecha de finalizacion del contrato: ";
						cout << "Ingrese el dia: ";
						cin >> dia;
						cout << "Ingrese el mes: ";
						cin >> mes;
						cout << "Ingrese el anio: ";
						cin >> anio;
						Fecha* fechaFinal = new Fecha(dia, mes, anio);
						Contrato* contrato = new ContratoPlazoFijo(codContrato, descPuesto, salario, fechaInicio, fechaFinal);
						break;
					case 2:
						cout << "Ingrese el codigo del contrato: ";
						cin >> codContrato;
						cout << "Ingrese la descripcion del puesto: ";
						getline(cin, descPuesto);
						cout << "Ingrese el salario del Miscelaneo: ";
						cin >> salario;
						cout << "Ingrese la plaza del Miscelaneo: ";
						getline(cin, plaza);
						cout << "Ingrese el codigo de la plaza: ";
						cin >> codPlaza;
						cout << "Ingrese la fecha de inicio del contrato: ";
						int dia, mes, anio;
						cout << "Ingrese el dia: ";
						cin >> dia;
						cout << "Ingrese el mes: ";
						cin >> mes;
						cout << "Ingrese el anio: ";
						cin >> anio;
						Fecha* fechaInicio = new Fecha(dia, mes, anio);
						Contrato* contrato = new ContratoTiempoIndefinido(codContrato, descPuesto, salario, fechaInicio, plaza, codPlaza);
						break;
					case 3:
						cout << "Ingrese el codigo del contrato: ";
						cin >> codContrato;
						cout << "Ingrese la descripcion del puesto: ";
						getline(cin, descPuesto);
						cout << "Ingrese el salario del Miscelaneo: ";
						cin >> salario;
						cout << "Ingrese el horario laboral del Miscelaneo: ";
						cin >> horarioLaboral;
						cout << "Ingrese el tipo de servicio del Miscelaneo: ";
						getline(cin, tipoServicio);
						cout << "Ingrese la fecha de inicio del contrato: ";
						int dia, mes, anio;
						cout << "Ingrese el dia: ";
						cin >> dia;
						cout << "Ingrese el mes: ";
						cin >> mes;
						cout << "Ingrese el anio: ";
						cin >> anio;
						Fecha* fechaInicio = new Fecha(dia, mes, anio);
						cout << "Ingrese la fecha de finalizacion del contrato: ";
						cout << "Ingrese el dia: ";
						cin >> dia;
						cout << "Ingrese el mes: ";
						cin >> mes;
						cout << "Ingrese el anio: ";
						cin >> anio;
						Fecha* fechaFinal = new Fecha(dia, mes, anio);
						Contrato* contrato = new ContratoServicioProfesionales(codContrato, descPuesto, salario, fechaInicio, fechaFinal, horarioLaboral, tipoServicio);
						break;
					default:
						cout << "Tipo de contrato invalido. Por favor, intente de nuevo.\n";
						break;
					}
					empleado = new Miscelaneos(cedula, nombre, edad, ocupacion, contrato, gradoEsc, labor);
					break;
		case 4:
    			cout << "Ingrese el tipo de avion (1. Militar, 2. Civil): ";
    				int tipoAvion;
    				cin >> tipoAvion;
    			switch (tipoAvion) {
    				case 1:
        				cout << "Ingrese los detalles del avion militar:\n";
						cout << "Ingrese la fecha de creacion del avion: ";
						int dia, mes, anio;
						cout << "Ingrese el dia: ";
						cin >> dia;
						cout << "Ingrese el mes: ";
						cin >> mes;
						cout << "Ingrese el anio: ";
						cin >> anio;
						Fecha* fechaCreacion = new Fecha(dia, mes, anio);
        				cout << "Distancia recorrida: ";
        				cin >> distanciaRecorrida;
        				cout << "Velocidad maxima: ";
        				cin >> velocidadMax;
						cout << "Categoria de avion: ";
        				cin >> categoriaAv;
        				aeronave = new aMilitar(fechaCreacion, distanciaRecorrida, velocidadMax, categoriaAv);
						aMilitar* a = dynamic_cast<aMilitar*>(aeronave);
						a->setTipoAvionMilitar(categoriaAv);
        				break;
    				case 2:
        				cout << "Ingrese el tipo de avion civil (1. Carga, 2. Comercial): ";
        				int tipoCivil;
        				cin >> tipoCivil;
        				switch (tipoCivil) {
        					case 1:
            					cout << "Ingrese los detalles del avion de carga:\n";
								cout << "Ingrese la fecha de creacion del avion: ";
								int dia, mes, anio;
								cout << "Ingrese el dia: ";
								cin >> dia;
								cout << "Ingrese el mes: ";
								cin >> mes;
								cout << "Ingrese el anio: ";
								cin >> anio;
								Fecha* fechaCreacion = new Fecha(dia, mes, anio);
								cout<<"Ingrese la distancia recorrida: ";
								cin>>distanciaRecorrida;
								cout<<"Ingrese el numero de placa: ";
								cin>>numPlaca;
								cout << "Altura de la puerta: ";
        						cin >> alturaPuerta;
								cout << "Anchura de la puerta: ";
								cin >> anchuraPuerta;
        						cout << "Escotilla (1 para si, 0 para no): ";
        						cin >> escotilla;
        						cout << "Puerta lateral (1 para si, 0 para no): ";
        						cin >> puertaLateral;
        						cout << "Categoria: ";
        						cin >> categoria;
								Fecha* fechaCreacion = new Fecha(dia, mes, anio);
            					aeronave = new aCarga(fechaCreacion,distanciaRecorrida,numPlaca,alturaPuerta,anchuraPuerta,escotilla,puertaLateral,categoria);
								aCarga* a = dynamic_cast<aCarga*>(aeronave);
								a->setTipo(categoria);
            					break;
        					case 2:
            					cout << "Ingrese los detalles del avion comercial:\n";
								cout << "Ingrese la fecha de creacion del avion: ";
								int dia, mes, anio;
								cout << "Ingrese el dia: ";
								cin >> dia;
								cout << "Ingrese el mes: ";
								cin >> mes;
								cout << "Ingrese el anio: ";
								cin >> anio;
								Fecha* fechaCreacion = new Fecha(dia, mes, anio);
								cout<<"Ingrese la distancia recorrida: ";
								cin>>distanciaRecorrida;
								cout<<"Ingrese el numero de placa: ";
								cin>>numPlaca;
								cout<<"Ingrese el numero de categoria: ";
								cin>>numeroCategoria;
								cout << "Pasillo unico (1 para si, 0 para no): ";
								cin >> pasilloUnico;
								cout << "Doble pasillo (1 para si, 0 para no): ";
								cin >> doblePasillo;
            					aeronave = new aComerciales(fechaCreacion,distanciaRecorrida,numPlaca,numeroCategoria,pasilloUnico,doblePasillo);
								aComerciales* a = dynamic_cast<aComerciales*>(aeronave);
								a->setTipo(to_string(numeroCategoria));
            					break;
        					default:
            					cout << "Tipo de avion civil invalido. Por favor, intente de nuevo.\n";
            						break;
       					 }
        				break;
    				default:
        				cout << "Tipo de avion invalido. Por favor, intente de nuevo.\n";
        				break;
    		}
			if (empleado != NULL) {
        	listaEmpleado.insertarEmpleado(empleado);
			}
			if (aeronave != NULL) {
        	ContenedorAviones.insertarAvion(aeronave);
        	cout << "Aeronave ingresada exitosamente.\n";
    		}
		default:
			cout << "Tipo de empleado o avion invalido. Por favor, intente de nuevo.\n";
			break;
		}
		case 2:
		default:	
		
		}
		
    

    system("pause");
    return 0;
}

