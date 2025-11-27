#ifndef PRODUCTO_H_
#define PRODUCTO_H_
#include <iostream>
#include <string>
using namespace std;

class Producto
{
protected:
    string Codigo;
    string Descripcion;
    double PrecioBase;
    static const float IVA;

     
public:
    Producto(const string& Codigo,const string& Descripcion,double &PrecioBase);
    virtual ~Producto();
    virtual double calcularPrecioVenta()=0;
    virtual void mostraInformacion();

};


#endif