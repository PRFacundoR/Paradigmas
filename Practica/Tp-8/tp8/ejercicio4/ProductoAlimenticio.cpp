#include "ProductoAlimenticio.h"

ProductoAlimenticio::ProductoAlimenticio(const string &Codigo, const string &Descripcion, double &PrecioBase, const Fecha &fecha,  bool apto):Producto(Codigo, Descripcion,PrecioBase)
{
    fechaVencimiento=fecha;
    esAptoCeliaco=apto;
}

ProductoAlimenticio::~ProductoAlimenticio()
{

}

double ProductoAlimenticio::calcularPrecioVenta()
{

    return PrecioBase*(1+IVA/2) ;
}

void ProductoAlimenticio::mostraInformacion()
{
    Producto::mostraInformacion();
    cout<<"Fecha Vencimiento: "<<fechaVencimiento.getDia()<<'/'<< fechaVencimiento.getMes()<<'/'<<fechaVencimiento.getAnio()<<endl;
    if (esAptoCeliaco==true)
    {
        cout<<" Es apto para celiaco"<<endl;
    }else
    {
        cout<<"No es apto para celiaco"<<endl;
    }
    
    
    

}

bool ProductoAlimenticio::estaVencido()
{
    Fecha f;
    return f.getAnio()< fechaVencimiento.getAnio();
}
