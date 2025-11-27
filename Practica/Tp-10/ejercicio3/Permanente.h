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
    const Fecha& fechaInicio,
    const Fecha& fechaFin,Inmueble* inmbueble);
    ~Permanente();

    double calcularCosto();
};




#endif