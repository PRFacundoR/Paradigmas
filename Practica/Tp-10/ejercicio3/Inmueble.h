#ifndef INMUEBLE_H
#define INMUEBLE_H
#include <iostream>
#include <string>
using namespace std;

class Inmueble
{
private:
    int codigo;
    string descripcion;
    string direccion;
    double costoMensual;

public:
    Inmueble(int codigo,
    string descripcion,
    string direccion,
    double costoMensual);
    ~Inmueble();

    int getCodigo();
    double getMontoMensual();
};





#endif