#ifndef AUTO_H_
#define AUTO_H_

#include <iostream>
#include <string>
#include "Vehiculo.h"
#include "Fecha.h"

using namespace std;

class Auto: public Vehiculo
{
private:
    int modelo;
    Fecha vencimientoVTV;
    int capacidad;
    
public:
    Auto(string& patente1, string& marca1, string& titular1, float& precioBaseAlquiler1, int& modelo1, Fecha& Venc, int& capac);
    ~Auto();


    void listarInformacion();
    bool estaVencidadVTV();
    float clacularAlquiler();
    int calcularAntiguedad();
};

#endif
