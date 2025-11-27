#include "Venta.h"

Venta::Venta(const int &codigoVenta, const Fecha &fecha)
{
    this->codigoVenta=codigoVenta;
    this->fecha=fecha;
}

Venta::~Venta()
{
    vector<Item*>:: iterator it;
    for (it=listaItems.begin() ; it!=listaItems.end(); ++it)
    {
        delete (*it);
    }

    listaItems.clear();
}

Fecha Venta::getFecha()
{
    return fecha;
}

void Venta::listarInformacion()
{   
    vector<Item*>:: iterator it;

    for (it=listaItems.begin() ; it!=listaItems.end(); ++it)
    {
        (*it)->listarInfo();
        cout<<endl;
    }
    


}

void Venta::agregar(Producto *producto, int &cantidad)
{   
    Item *nuevoItem=new Item(producto,cantidad,producto->calcularPrecioVenta());
    listaItems.push_back(nuevoItem);
    
    

}

double Venta::calcularMontoTotal()
{
    double total=0;
    vector<Item*>:: iterator it;
    for (it=listaItems.begin() ; it!=listaItems.end(); ++it)
    {
       total+= (*it)->calcularTotal();
    }
    return total;
}
