#ifndef COMPRASDECONTADO_H_
#define COMPRASDECONTADO_H_
#include <iostream>
#include <string>
#include "Fecha.h"
#include "Compra.h"
#include<vector>

class CompraDeContado: public Compra
{
private:
static const double DESCUENTO;
    
public:
    CompraDeContado(const  int&, const Fecha&, vector<Producto*>);
    ~CompraDeContado();

    double calcularMonto();
    void escribirInfo();
};

#endif

