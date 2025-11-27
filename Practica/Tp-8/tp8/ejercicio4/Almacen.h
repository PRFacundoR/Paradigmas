#ifndef ALMACEN_H_
#define ALMACEN_H_

#include "Venta.h"
#include "Fecha.h"
#include"Producto.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Almacen
{
private:
    vector<Venta*> listaVentas;
    vector<Producto*>listaProducto;
    
public:
    Almacen(vector<Producto*>listaProducto);
    ~Almacen();

    void CrearVenta(vector<Producto*> productos,vector<int> cantidades, const Fecha&fech, const int&codigo);
    double calcularMontoTotalVentas(/*int &mes, int &anio*/);
    void listarInformacion();

};

#endif