#include <iostream>
#include<string>
#include"Producto.h"
#include "Compra.h"
#include "CompraDeContado.h"
#include "CompraEnCuotas.h"
#include "Tienda.h"
#include "Fecha.h"


int main()
{
    string nombre="tienda1";
    string dir="alcabucho";
    Tienda *t=new Tienda(nombre,dir);
    
    vector<Producto*> listaProductos;
    int cod;
    string desc;
    double prec;

    // Producto 1: Leche
    cod = 101; desc = "Leche"; prec = 800.0;
    Producto *p1=new Producto(cod, desc, prec);
    listaProductos.push_back(p1);

    // Producto 2: Chocolate
    cod = 102; desc = "Chocolate"; prec = 1200.50;
    
    Producto *p2=new Producto(cod, desc, prec);
    listaProductos.push_back(p2);

    // Producto 3: Leche Chocolatada
    cod = 103; desc = "Leche Chocolatada"; prec = 1550.0;
    
    Producto *p3=new Producto(cod, desc, prec);
    listaProductos.push_back(p3);

    // Producto 4: Maiz
    cod = 104; desc = "Maiz"; prec = 620.75;
    
    Producto *p4=new Producto(cod, desc, prec);
    listaProductos.push_back(p4);

    // Producto 5: Azucar
    cod = 105; desc = "Azucar"; prec = 910.0;
    
    Producto *p5=new Producto(cod, desc, prec);
    listaProductos.push_back(p5);

    vector<Producto*>:: iterator it;
    for ( it=listaProductos.begin(); it!=listaProductos.end();++it)
    {
        (*it)->ResumenProducto();
    }


    cout<<endl<<endl<<endl<<"compras"<<endl;
    int codC=1;
    int cantCuotas=6;
    Fecha f1(24,11,2025);
    t->generarCompras(codC,f1,cantCuotas,listaProductos);
    
    t->generarCompras(codC,f1,listaProductos);

    int mes=11;int anio=2025;
    t->resumenCompras(mes, anio);

    
    

    

    
    return 0;
}
