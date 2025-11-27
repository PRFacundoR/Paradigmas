#include <iostream>
#include <string>

#include "Pelicula.h"
using namespace std;

class PeliculaInternacional: public Pelicula
{
private:
static const float INCREMENTO;
string paisDeOrigen;
    
public:
    PeliculaInternacional(string, Persona*, Fecha*, float,string);
    PeliculaInternacional();

    //hago copia constructor
    
    ~PeliculaInternacional();
    float calcularCosto();
    void listarInformacion();
};

