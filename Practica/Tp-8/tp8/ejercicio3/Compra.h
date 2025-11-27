#ifndef COMPRA_H_
#define COMPRA_H_

#include <iostream>
#include <string>
#include "Fecha.h"
#include "Producto.h"
#include<vector>


class Compra
{
protected:
    int codigo;
    Fecha fechaCompra;
    double totalProducto();
    vector<Producto*> productos;
public:
    Compra(const int&,const  Fecha&, vector<Producto*>);
    virtual ~Compra();

    virtual double calcularMonto()=0;
    void escribirInfo();
    Fecha getFecha();
};

#endif