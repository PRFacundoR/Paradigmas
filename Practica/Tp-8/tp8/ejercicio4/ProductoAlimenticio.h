#ifndef PRODUCTOALIMENTICIO_H_
#define PRODUCTOALIMENTICIO_H_
#include <iostream>
#include <string>
#include "Producto.h"
#include "Fecha.h"
using namespace std;

class ProductoAlimenticio: public Producto
{
private:
    Fecha fechaVencimiento;
    bool esAptoCeliaco;

public:
    ProductoAlimenticio(const string &Codigo, const string &Descripcion, double &PrecioBase, const Fecha& fecha, bool apto);
    ~ProductoAlimenticio();

    
    double calcularPrecioVenta();
    void mostraInformacion();
    bool  estaVencido();
};

#endif