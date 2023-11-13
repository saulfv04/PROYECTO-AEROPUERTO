//Universidad Nacional de Costa Rica
//Proyecto programado del curso Programacion I
//Estudiante: Saúl Antonio Francis Vargas, 1-1923-0466
//Profesora: Marianela Solis Orias
#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Fecha {
private:
    int dia;
    int mes;
    int anio;
public:
    Fecha(int, int, int);
    virtual ~Fecha();
    int getDia();
    int getMes();
    int getAnio();
    string toString();
};

