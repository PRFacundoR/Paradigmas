#include "pedido.h"

int Pedido::autonumerico = 0;


Pedido::Pedido(const string &idC, enum formaPago fP, const Fecha &fechaP, Producto *producto)
{

    autonumerico++;
    codigoPedido=autonumerico;
    Produc=producto;
    idCliente = idC;
    this->formaDepago = fP;
    fechaPedido = fechaP;
    entregado=false;
}

Pedido::~Pedido()
{

}

void Pedido::escribirInfo()
{
    cout << "Codigo del pedido: " << codigoPedido << endl;
    cout << "Id del cliente: " << idCliente << endl;
    cout << "Forma de Pago: " << formaDepago << endl;
    cout << "Fecha De pedido: " << fechaPedido.getDia() << '/' << fechaPedido.getMes() << '/' << fechaPedido.getAnio() << endl;
    if (!entregado)
    {
        cout << "No hay fecha de entrega: " << endl;
    }
    else
    {
        cout << "Fecha de entrega: " << fechaEntrega.getDia() << '/' << fechaEntrega.getMes() << '/' << fechaEntrega.getAnio() << endl;
    }

    cout << "Producto" << endl;

    Produc->listarInformacion();
    
}

void Pedido::entregarPedido(const Fecha &fecha)
{

    fechaEntrega=fecha;
    entregado=true;
}

Fecha Pedido::getFechaPedido()
{
    return fechaPedido;

}

int Pedido::getCodigo()
{
    return codigoPedido;
}

double Pedido::calcularCosto() const
{
    double precio;
        precio=Produc->calcularPrecioDeVenta();
    

    if (formaDepago==Credito)
    {
        precio*=1.15;
    }
    
    
    return precio + Envio;
}
