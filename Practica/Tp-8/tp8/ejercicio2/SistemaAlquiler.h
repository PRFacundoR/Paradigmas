#ifndef SISTEMAALQUILER_H_
#define SISTEMAALQUILER_H_

#include <iostream>
#include <string>
#include <vector>

#include "Alquiler.h"

using namespace std;

class SistemaAlquiler
{
private:
  vector<Alquiler*> alquileres;
public:
    //SistemaAlquiler();
    ~SistemaAlquiler();
    Alquiler* crearAlquiler(const Fecha &ini,const  Fecha &fin, Vehiculo *Vehi, const string &Dni, const string &codigo);
    void listarAlquileres(const Fecha &ini, const Fecha &fin);
    float calcularRecaudacio(const int& mes, const int &anio);
};

#endif