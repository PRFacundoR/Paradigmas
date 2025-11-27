#include "Item.h"

Item::Item(Producto *producto, const int &cantidad,const double &precioUnitario)
{
    this->producto = producto;
    this->cantidad = cantidad;
    this->precioUnitario = precioUnitario;
}

Item::~Item()
{
}

double Item::calcularTotal()
{
    return precioUnitario * cantidad;
}

void Item::listarInfo()
{
    producto->mostraInformacion();
    cout<<"Cantidad de productos "<<cantidad<<endl;
    cout<<"Precio por unidad "<< precioUnitario<<endl;  

}
