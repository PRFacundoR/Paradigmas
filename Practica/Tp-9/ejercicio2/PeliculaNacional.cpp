#include "PeliculaNacional.h"
#include"Pelicula.h"


const float PeliculaNacional:: DESCUENTO=0.20;
PeliculaNacional::PeliculaNacional(string des, Persona *dir, Fecha *fech, float precio):Pelicula(des,dir,fech,precio)
{
    cout<< "Pelicula Nacional creada";
}

PeliculaNacional::~PeliculaNacional()
{
    cout<<"Peli Nacional Borrada";
}

float PeliculaNacional::calcularCosto()
{
    float costo=precioBase;
    if (!esEstreno())
    {
        costo=costo*(1-DESCUENTO);
    }
    

    return costo;
}