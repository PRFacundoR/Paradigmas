#include "Inmueble.h"

Inmueble::Inmueble(int codigo, string descripcion, string direccion, double costoMensual)
{
    this->codigo=codigo;
    this->descripcion=descripcion;
    this->direccion=direccion;
    if(costoMensual>0){

     this->costoMensual=costoMensual;     
    }else
    {
        this->costoMensual=100000;

    }
    

}

Inmueble::~Inmueble()
{
    cout<<endl<<"se borro el inmueble"<<endl;
}

int Inmueble::getCodigo()
{
    return this->codigo;
}

double Inmueble::getMontoMensual()
{
    return this->costoMensual;
}
