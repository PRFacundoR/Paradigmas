#ifndef TIENDA__H_
#define TINEDA_H_

#include <iostream>
#include <string>
#include "Compra.h"
#include <vector>
#include "Fecha.h"
class Tienda
{
private:
    string nombre;
    string direccion;
    vector<Compra*> compras;
public:
    Tienda(string&, string& );
    ~Tienda();

    void generarCompras(const  int& ,const  Fecha&,const  int&, vector<Producto*>);
    void generarCompras(const int &cod,const  Fecha &fec,  vector<Producto *> prod);
    void resumenCompras(int& mes, int &anio);
};

#endif

