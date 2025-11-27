#include "Vehiculo.h"
#include <iostream>
using namespace std;

Vehiculo::Vehiculo(string &patente1, string &marca1, string &titular1, float &precioBaseAlquiler1)
{
    patente=patente1;
    marca=marca1;
    titular=titular1;
    precioBaseAlquiler=precioBaseAlquiler1;
}

Vehiculo::~Vehiculo()
{
}

void Vehiculo::listarInformacion()
{
    cout<<"La patente es: "<<patente<<endl;
    cout<<"La marca es: "<< marca<<endl;
    cout<<"El titular es: "<< titular <<endl;
    cout<<"El precio base del alquiler es: "<<precioBaseAlquiler<<endl;
    cout<<"El precio del alquiler es: "<<clacularAlquiler()<<endl;
}
