#include "Producto.h"
#include <iostream>
#include <string>
using namespace std;

Producto::Producto(const int &cod,const string &desc,const double &precio)
{
    this->precio=precio;
    codigo=cod;
    descripcion=desc;
}


Producto::~Producto()
{
}
double Producto::getPrecio()
{
    return precio;
}

void Producto::ResumenProducto()
{
    cout<<"Descripcion: " <<descripcion<<endl;
    cout<<"Precio: "<<precio<<endl;
    cout<<"Codigo. "<< codigo<<endl;
}
