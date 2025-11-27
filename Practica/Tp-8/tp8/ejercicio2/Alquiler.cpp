#include "Alquiler.h"
#include <iostream>
using namespace std;

Alquiler::Alquiler(const string &cod,const Fecha &ini,const Fecha &fin,const string &DNI, Vehiculo *vehi)
{
    codigo = cod;
    inicio = ini;
    this->fin = fin;
    clienteDNI = DNI;
    vehiculo = vehi;
}

Alquiler::~Alquiler()
{
}

void Alquiler::listarInfo()
{
    cout<<"El codigo del alquiler es: "<<codigo<<endl;
    cout<<"El inicio del alquiler es: "<<inicio.getDia()<<'/'<<inicio.getMes()<<'/'<<inicio.getDia()<<endl;
    cout<<"El fin del alquiler es: "<<fin.getDia()<<'/'<<fin.getMes()<<'/'<<fin.getDia()<<endl;
    vehiculo->listarInformacion();
}

float Alquiler::calcularAlquiler()
{
    return vehiculo->clacularAlquiler()*(fin-inicio);
}

Fecha Alquiler::getIicio()
{
    return inicio;
}

Fecha Alquiler::getFin()
{
    return fin;
}
