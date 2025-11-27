#ifndef VENTA_H_
#define VENTA_H_

#include "Item.h"
#include "Fecha.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Venta
{
private:
int codigoVenta;
Fecha fecha;
vector<Item*> listaItems;

public:
    Venta(const int& codigoVenta,const Fecha& fecha);
    ~Venta();
    Fecha getFecha();
    void listarInformacion();
    void agregar(Producto *producto, int &cantidad);
    double calcularMontoTotal();
};
#endif
