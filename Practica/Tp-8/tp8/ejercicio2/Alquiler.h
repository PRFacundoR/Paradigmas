#ifndef ALQUILER_H_
#define ALQUILER_H_
#include <iostream>
#include <string>
#include "Fecha.h"
#include "Vehiculo.h"
using namespace std;


class Alquiler
{
private:
    string codigo;
    Fecha inicio;
    Fecha fin;
    string clienteDNI;
    Vehiculo *vehiculo;

public:
    Alquiler(const string&,const Fecha&,const Fecha&,const string&,Vehiculo*);
    ~Alquiler();

    void listarInfo();
    float calcularAlquiler();
    Fecha getIicio();
    Fecha getFin();
};
#endif