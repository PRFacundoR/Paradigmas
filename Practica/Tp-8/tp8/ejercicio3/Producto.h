#ifndef PRODUCTO_H_
#define PRODUCTO_H_

#include <iostream>
#include <string>
using namespace std;

class Producto
{
private:
    int codigo;
    string descripcion;
    double precio;
public:
    Producto(const int& cod, const string& desc,const double& precio );
    ~Producto();

    double getPrecio();
    void ResumenProducto();
};
#endif
