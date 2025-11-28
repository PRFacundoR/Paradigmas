#ifndef ALQUILER_H_
#define ALQUILER_H_
#include <iostream>
#include <string>
#include "Fecha.h"
#include "Inmueble.h"
using namespace std;


class Alquiler
{
protected:
    int codigo;
    int idCliente;
    Fecha fechaInicio;
    Fecha fechaFin;
    Inmueble* inmueble;
    int getCantidadMeses();

public:
    Alquiler(int codigo,
    int idCliente,
     Fecha fechaInicio,
     Fecha fechaFin,Inmueble* inmueble);
    virtual ~Alquiler();

    virtual double calcularCosto()=0;
    virtual void listarInformacion();


};




#endif