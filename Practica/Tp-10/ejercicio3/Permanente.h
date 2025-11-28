#ifndef PERMANENTE_H_
#define PERMANENTE_H_
#include <iostream>
#include <string>
#include "Alquiler.h"

class Permanente: public Alquiler
{

    
public:
    Permanente(int codigo,
    int idCliente,
     Fecha fechaInicio,
     Fecha fechaFin,Inmueble* inmbueble);
    ~Permanente();

    double calcularCosto();
};




#endif