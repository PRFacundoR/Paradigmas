#include "Moto.h"
#include <iostream>

const int Moto:: Cmedia = 250;
const int Moto:: CAlta = 600;

Moto::Moto(string& patente1, string& marca1, string& titular1, float& precioBaseAlquiler1, double& capac): Vehiculo(patente1, marca1, titular1, precioBaseAlquiler1)
{
    
    cilindrada=capac;
    

    

}

Moto::~Moto()
{
    
}

float Moto::clacularAlquiler()
{
    float incremento = 0;
    if (cilindrada >= Cmedia && cilindrada < CAlta)
    {
        incremento = precioBaseAlquiler * 0.25;
    }
    else
    {
        if (cilindrada >= CAlta)
        {
            incremento = precioBaseAlquiler * 0.5;
        }
    }

    return precioBaseAlquiler + incremento;
}

void Moto::listarInformacion()
{
    Vehiculo::listarInformacion();
    cout << "La cilindrada de la moto es: " << cilindrada << endl;
}