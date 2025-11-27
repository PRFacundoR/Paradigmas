#ifndef PRODUCTOLIMPIEZA_H_
#define PRODUCTOLIMPIEZA_H_
#include <iostream>
#include <string>
#include "Producto.h"

using namespace std;

class ProductoLimpieza: public Producto
{
private:
   
public:
    ProductoLimpieza(const string& Codigo,const string& Descripcion,double &PrecioBase, bool estoxico);
    ~ProductoLimpieza();
    double calcularPrecioVenta();
    void mostrarInformacion();
    
    bool esToxico;

};

#endif