#include "ProductoLimpieza.h"

ProductoLimpieza::ProductoLimpieza(const string &Codigo, const string &Descripcion, double &PrecioBase, bool estoxico):Producto(Codigo, Descripcion, PrecioBase)
{
    this->esToxico=estoxico;
}

ProductoLimpieza::~ProductoLimpieza()
{
}

double ProductoLimpieza::calcularPrecioVenta()
{

    return PrecioBase*(1+IVA);
}

void ProductoLimpieza::mostrarInformacion()
{
    Producto::mostraInformacion();
}
