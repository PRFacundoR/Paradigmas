#ifndef INMOBILIARIA_H_
#define INMOBILIARIA_H_
#include <iostream>
#include <string>
#include "Alquiler.h"
#include <vector>
#include "Permanente.h"
#include "Temporal.h"
using namespace std;

class Inmobiliaria
{
private:
    int codigoAFIP;
    string nombreEmpresa;
    string CUIT;
    vector<Alquiler*> alquileres;
    
public:
    Inmobiliaria(int codigoAFIP,
    string nombreEmpresa,
    string CUIT);
    ~Inmobiliaria();

    Alquiler* alquilar(int codigo,
    int idCliente,
   const Fecha & fechaInicio,
    const Fecha & fechaFin,Inmueble* inmueble);

    void resumen();
};



#endif