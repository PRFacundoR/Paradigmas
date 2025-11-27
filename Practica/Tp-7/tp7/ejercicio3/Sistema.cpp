#include "Sistema.h"

Producto **Sistema::reservaDeMemoria(int dim)
{
    Producto **arreglo = new Producto *[dim];
    if (arreglo == nullptr)
    {
        cout << "no se asigno la memoria";
    }

    return arreglo;
}

Pedido **Sistema::reservaDeMemoriaP(int dim)
{
    Pedido **arreglo = new Pedido *[dim];
    if (arreglo == nullptr)
    {
        cout << "no se asigno la memoria";
    }

    return arreglo;
}

Pedido *Sistema::obtenerPedido(int &codPed)
{

    for (int i = 0; i < cantPedidos; i++)
    {
        if (arregloPed[i]->getCodigo() == codPed)
        {
            return arregloPed[i];
        }
    }    
    return nullptr;
}

Producto *Sistema::obtenerProducto(int &codProd)
{

    for (int i = 0; i < cantiProductos; i++)
    {
        if (arregloProduc[i]->getCodigo() == codProd)
        {
            return arregloProduc[i];
        }
        
    }    
    return nullptr;
}

Sistema::Sistema(int &cantProduc, Producto **ListaProductos)
{
    arregloPed = nullptr;
    arregloProduc = reservaDeMemoria(cantProduc);
    for (int i = 0; i < cantProduc; i++)
    {
        arregloProduc[i] = ListaProductos[i];
    }

    cantiProductos = cantProduc;
    cantPedidos = 0;
}

Sistema::~Sistema()
{
    for (int i = 0; i < cantPedidos; i++)
    {
        delete arregloPed[i];
        arregloPed[i]=nullptr;
    }
    delete [] arregloPed;
    arregloPed=nullptr;
    cantPedidos=0;
    delete [] arregloProduc;
    cantiProductos=0;
    arregloProduc=nullptr;
    if (arregloProduc==nullptr && arregloPed==nullptr)
    {
        cout<<"borrado";
    }
    

    

}

void Sistema::agregarProducto(Producto *prod)
{
    Producto **ListaAux = arregloProduc;
    int tamanioAnterior = cantiProductos;
    cantiProductos++;
    arregloProduc = reservaDeMemoria(cantiProductos);

    for (int i = 0; i < tamanioAnterior; i++)
    {
        arregloProduc[i] = ListaAux[i];
    }

    arregloProduc[tamanioAnterior] = prod;

    if (ListaAux != nullptr)
    {
        delete[] ListaAux;
    }
}





void Sistema::registrarPedido(const Fecha &fecha, const string &cliente, int &codProd, enum formaPago fP)
{
    Producto *prod = obtenerProducto(codProd);
    if (prod)
    {

        Pedido **listaAux = arregloPed;
        int tamanioAnte = cantPedidos;

        cantPedidos++;
        arregloPed = reservaDeMemoriaP(cantPedidos);

        for (int i = 0; i < tamanioAnte; i++)
        {
            arregloPed[i] = listaAux[i];
        }
        arregloPed[tamanioAnte] = new Pedido(cliente, fP, fecha, prod);

        if (listaAux != nullptr)
        {
            delete[] listaAux;
        }
    }
}

void Sistema::cargarFechaEntrega(int &codPed, const Fecha &fecha)
{
    Pedido *Ped = obtenerPedido(codPed);
    if (Ped)
    {
      Ped->entregarPedido(fecha);  
    }
    

}

void Sistema::listarPedidos(const Fecha &fecha)
{
    for (int i = 0; i < cantPedidos; i++)
    {
        if (fecha.getAnio()== arregloPed[i]->getFechaPedido().getAnio())
        {
            arregloPed[i]->escribirInfo();
        }
        
    }
    
}

void Sistema::aux()
{
    for (int i = 0; i < cantiProductos; i++)
    {
        arregloProduc[i]->listarInformacion();
        cout<<endl;
    }
    
}
