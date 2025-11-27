#include "Auto.h"
#include <iostream>

using namespace std;

Auto::Auto(string& patente1, string& marca1, string& titular1, float& precioBaseAlquiler1, int& modelo1, Fecha& Venc, int& capac): Vehiculo(patente1, marca1, titular1, precioBaseAlquiler1)
{
    modelo=modelo1;
    capacidad=capac;
    vencimientoVTV=Venc;

    

}

Auto::~Auto()
{
}

void Auto::listarInformacion()
{
    Vehiculo:: listarInformacion();
    cout<<"El modelo del auto es: "<<modelo<<endl;
    cout<<"La fecha de vencimiento de la VTV es:"<<vencimientoVTV.getAnio()<<'/'<<vencimientoVTV.getMes()<<'/'<<vencimientoVTV.getDia()<<endl;
    cout<<"La capacidad del auto es: "<<capacidad<<endl;
}

bool Auto::estaVencidadVTV()
{
    Fecha fechaActual;
    return vencimientoVTV.getAnio() <fechaActual.getAnio();
}

float Auto::clacularAlquiler()
{
    float incrementoCapacidad=0;
    float inncrementoAntiguedad=0;
    if(capacidad>5){
        incrementoCapacidad=precioBaseAlquiler*0.25;
    }
    if (calcularAntiguedad()<5)
    {
        inncrementoAntiguedad=precioBaseAlquiler*0.30;
    }
    
    return precioBaseAlquiler+ incrementoCapacidad+inncrementoAntiguedad; 
}

int Auto::calcularAntiguedad()
{
    Fecha fechaActual;
    return fechaActual.getAnio()-modelo;
}