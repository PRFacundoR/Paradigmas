#ifndef COMPRASENCUOTAS_H_
#define COMPRASENCUOTAS_H_


#include <iostream>
#include <string>
#include "Fecha.h"
#include "Compra.h"
#include<vector>


class CompraEnCuotas: public Compra
{
private:
    static const double INTERES3CUOTAS;
    static const double INTERES6CUOTAS;
    int cantidadCuotas;

public:
    CompraEnCuotas(const int&, const Fecha&, vector<Producto*>,const  int&);
    ~CompraEnCuotas();

    void escribirInfo();
    double calcularMonto();
};


#endif