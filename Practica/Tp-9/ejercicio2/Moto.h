#ifndef MOTO_H_
#define MOTO_H_

#include <iostream>
#include <string>
#include "Vehiculo.h"
using namespace std;

class Moto : public Vehiculo
{
private:
    static const int Cmedia ;
    static const int CAlta ;
    double cilindrada;

public:
    Moto(string&, string&,string& ,float&, double&);
    ~Moto();
    float clacularAlquiler();
    void listarInformacion();
};

#endif