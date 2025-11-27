//almacena productos
#ifndef PEDIDO_H_       // <-- INICIO DE LA GUARDA
#define PEDIDO_H_
#include <iostream>
#include <string>
#include "Fecha.h"
#include "Producto.h"
using namespace std;
enum formaPago{Debito, Credito};

class Pedido
{
private:
// no mandar al constructor
static int autonumerico;
int codigoPedido;

string idCliente;
formaPago formaDepago;
Fecha fechaPedido;
Fecha fechaEntrega;
bool entregado;
Producto*Produc;


const static int Envio=3000;


    
public:
    Pedido(const string &idC, enum formaPago fP, const Fecha& fechaP, Producto* producto);
    ~Pedido();


    void escribirInfo();
    void entregarPedido(const Fecha &fecha);
    Fecha getFechaPedido();
    int getCodigo();
    double calcularCosto()const;



};
#endif /* PEDIDO_H_ */

