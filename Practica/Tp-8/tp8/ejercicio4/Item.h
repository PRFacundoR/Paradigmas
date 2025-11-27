#ifndef ITEM_H_
#define ITEM_H_
#include <iostream>
#include "Producto.h"

using namespace std;
class Item
{
private:
    Producto *producto;
    int cantidad;
    double precioUnitario;
    Fecha f2;

public:
    Item(Producto *producto,
         const int& cantidad,
         const double& precioUnitario);
    ~Item();

    double calcularTotal();
    void listarInfo();
    
};

#endif