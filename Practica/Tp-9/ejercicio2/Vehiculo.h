#ifndef VEHICULO_H_
#define VEHICULO_H_
#include <iostream>
#include <string>

using namespace std;

class Vehiculo
{
protected:
string patente;
string marca;
string titular;
float precioBaseAlquiler;
    
public:
    Vehiculo(string &patente1, string &marca1, string &titular1, float &recioBaseAlquiler1);
    virtual ~Vehiculo();

    void listarInformacion();
    virtual float clacularAlquiler()=0;


};
#endif

