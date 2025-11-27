#include <iostream>
#include <string>

#include "Pelicula.h"
using namespace std;

class PeliculaNacional: public Pelicula
{
private:
    static const float DESCUENTO;
public:
    PeliculaNacional(string, Persona*, Fecha*, float);
    PeliculaNacional();
    ~PeliculaNacional();

    float calcularCosto();

};

