#include "Pelicula.h"
#include "PeliculaInternacional.h"
const float PeliculaInternacional::INCREMENTO=0.30;
PeliculaInternacional::PeliculaInternacional(string des, Persona *dir, Fecha *fech, float precio, string pais):Pelicula(des,dir,fech,precio)
{
    this->paisDeOrigen=pais;
    cout<< "Pelicula Internacional creada";
}
PeliculaInternacional::~PeliculaInternacional()
{
  cout<<"Peli Internacional Borrada";
}

float PeliculaInternacional::calcularCosto()
{
  float costo= precioBase*(1+INCREMENTO);
  return costo;
}

void PeliculaInternacional::listarInformacion()
{

    Pelicula::listarInformacion();
    cout<<" Pais de origen: "<< this->paisDeOrigen;
}

