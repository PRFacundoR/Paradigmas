#include "CompraEnCuotas.h"

const double CompraEnCuotas::INTERES3CUOTAS = 0.10;
const double CompraEnCuotas::INTERES6CUOTAS = 0.20;
CompraEnCuotas::CompraEnCuotas(const int &cod,const  Fecha &fec, vector<Producto *> prod,const  int &cant) : Compra(cod, fec, prod)
{
    cantidadCuotas = cant;
}

CompraEnCuotas::~CompraEnCuotas()
{
}

void CompraEnCuotas::escribirInfo()
{
    Compra::escribirInfo();
    cout<<endl<<"Monto Total: "<< calcularMonto()<<endl;
}

double CompraEnCuotas::calcularMonto()
{
    double monto = totalProducto();
    if (cantidadCuotas == 3)
    {
        monto = monto * (1 + INTERES3CUOTAS);
    }
    else
    {
        monto = monto * (1 + INTERES6CUOTAS);
    }

    return monto;
}
