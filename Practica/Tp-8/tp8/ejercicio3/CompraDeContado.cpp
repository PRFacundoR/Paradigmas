#include "CompraDeContado.h"

const double CompraDeContado:: DESCUENTO=0.15;
CompraDeContado::CompraDeContado(const int &cod, const Fecha &fec, vector<Producto*>prod):Compra(cod,fec,prod){}

CompraDeContado::~CompraDeContado()
{
}

double CompraDeContado::calcularMonto()
{
    double monto=this->totalProducto();
    return monto*(1-DESCUENTO);
}

void CompraDeContado::escribirInfo()
{
    Compra::escribirInfo();
    

}
