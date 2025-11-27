// crea el pedido y almacena productos
#ifndef SISTEMA_H_      // <-- INICIO DE LA GUARDA
#define SISTEMA_H_      // <-- DEFINICIÓN DE LA GUARDA
#include <iostream>
using namespace std;

#include "Pedido.h"
#include "Producto.h"
#include "Fecha.h"

class Sistema
{
private:
    Pedido **arregloPed;
    Producto **arregloProduc;
    // fun aux
    Producto **reservaDeMemoria(int dim = 10);
    Pedido **reservaDeMemoriaP(int dim = 10);

    int cantPedidos;
    int cantiProductos;
    Pedido *obtenerPedido(int &codPed);
    Producto *obtenerProducto(int &codProd);

public:
    Sistema(int &cantProduc, Producto **ListaProductos); 
    ~Sistema();

    void agregarProducto(Producto *prod);
    void registrarPedido(const Fecha &fecha, const string &cliente, int &codProd, enum formaPago fP);
    void cargarFechaEntrega(int &codPed, const Fecha &fecha);
    void listarPedidos(const Fecha &fecha);

    void aux();
};
#endif /* SISTEMA_H_ */ // <-- FIN DE LA GUARDA