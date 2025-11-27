#include "Producto.h"

const float Producto:: IVA=0.21;

Producto::Producto(const string &Codigo, const string &Descripcion, double &PrecioBase)
{
    this->Codigo=Codigo;
    this->Descripcion=Descripcion;
    this->PrecioBase=PrecioBase;
}

Producto::~Producto()
{
    cout<<"Producto borrado";
}

void Producto::mostraInformacion()
{
    cout<<"Codigo: "<<Codigo<<endl;
    cout<<"Descripcion: "<<Descripcion<<endl;
    cout<<"Precio Base: "<< PrecioBase<<endl;
}
