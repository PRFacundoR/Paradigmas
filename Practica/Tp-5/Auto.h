#include <iostream>
#include <string>
#include "Fecha.h"
using namespace std;

class Auto
{
private:
    int patente;
    string Marca;
    double Precio;
    string NombreTit;
    Fecha Modelo;
    Fecha FecVencVTV;
    int capacidad;


public:
   int Patente();
   string NombreTitular();
   void VTVVencida(Fecha fechaActual);
   int Antiguedad(Fecha fechaActual);
   void Datos();
   double CostoAlquiler(Fecha fechaActual);


};

