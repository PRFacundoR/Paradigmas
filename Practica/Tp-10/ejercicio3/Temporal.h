#ifndef TEMPORAL_H_
#define TEMPORAL_H_
#include <iostream>
#include <string>
#include "Alquiler.h"
using namespace std;


class Temporal: public Alquiler
{
private:
    static const double INTERES_MENSUAL;
public:
    Temporal(int codigo,
    int idCliente,
    const Fecha& fechaInicio,
    const Fecha& fechaFin,Inmueble* inmbueble);
    ~Temporal();

    void listarInformacion();
    double calcularCosto();


};



#endif