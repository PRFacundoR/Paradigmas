#include "Compra.h"
#include <algorithm>

double Compra::totalProducto()
{
    double total=0;
    vector<Producto*>:: iterator it;
    for (it=productos.begin(); it!=productos.end(); ++it)
    {
        total+=(*it)->getPrecio();
    }
    
    return total ;
}

Compra::Compra(const int &cod, const Fecha &fec, vector<Producto*>produc)
{
    codigo=cod;
    fechaCompra=fec;
    productos=produc;

}

Compra::~Compra()
{
    productos.clear();
    cout<< "Se borro la compra";
}

void Compra::escribirInfo()
{
    vector<Producto*>:: iterator it;

    for (it=productos.begin(); it!=productos.end() ; ++it)
    {
        (*it)->ResumenProducto();
        cout<<endl;
    }
    

}

Fecha Compra::getFecha()
{
    return fechaCompra;
}
