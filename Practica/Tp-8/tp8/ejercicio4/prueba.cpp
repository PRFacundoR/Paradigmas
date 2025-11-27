#include <iostream>
#include<string>
#include "Fecha.h"
#include "Venta.h"
#include "Item.h"
#include"Producto.h"
#include "ProductoAlimenticio.h"
#include "ProductoLimpieza.h"
#include "Almacen.h"
using  namespace std;
int main(int argc, char const *argv[])
{
    string codigo;
    string desc;
    double precio;
    Fecha fecVen(1, 1, 2026); // Fecha de vencimiento base
    bool aptoCeliaco;
    bool estoxico;

    // --- 1. Productos Alimenticios ---

    // P1: Leche (Inicializado con valores)
    codigo = "101";
    desc = "Leche Entera Tetra";
    precio = 800.0;
    aptoCeliaco = false;
    // La fecha de vencimiento es la variable 'fecVen'
    Producto *p1 = new ProductoAlimenticio(codigo, desc, precio, fecVen, aptoCeliaco);

    // P2: Pan Sin TACC (Inicializado con valores)
    codigo = "102";
    desc = "Pan Integral Sin TACC";
    precio = 1500.50;
    aptoCeliaco = true;
    Producto *p2 = new ProductoAlimenticio(codigo, desc, precio, Fecha(10, 5, 2026), aptoCeliaco);

    // P3: Azúcar (Inicializado con valores)
    codigo = "103";
    desc = "Azucar Refinada";
    precio = 910.0;
    aptoCeliaco = true;
    Producto *p3 = new ProductoAlimenticio(codigo, desc, precio, Fecha(1, 1, 2030), aptoCeliaco);

    // --- 2. Productos de Limpieza ---

    // P4: Lavandina (Inicializado con valores)
    codigo = "201";
    desc = "Lavandina concentrada";
    precio = 1250.0;
    estoxico = true;
    Producto *p4 = new ProductoLimpieza(codigo, desc, precio, estoxico);

    // P5: Detergente (Inicializado con valores)
    codigo = "202";
    desc = "Detergente de platos";
    precio = 700.25;
    estoxico = false;
    Producto *p5 = new ProductoLimpieza(codigo, desc, precio, estoxico);

    // P6: Limpiador de pisos (Inicializado con valores)
    codigo = "203";
    desc = "Limpiador de pisos neutro";
    precio = 950.99;
    estoxico = false;
    Producto *p6 = new ProductoLimpieza(codigo, desc, precio, estoxico);

    vector<Producto*> lista;
    lista.push_back(p1);
    lista.push_back(p2);
    lista.push_back(p3);
    lista.push_back(p4);
    lista.push_back(p5);
    lista.push_back(p6);

    p1->mostraInformacion();
    cout<<endl;

    p5->mostraInformacion();
    cout<<endl;
    cout<<endl;

    Almacen *almacen=new Almacen(lista);

    vector<Producto*> listaProduc2;
    listaProduc2.push_back(p2);
    listaProduc2.push_back(p3);
    listaProduc2.push_back(p4);
    listaProduc2.push_back(p5);

    vector<int> listaCant;

    listaCant.push_back(3);
    
    listaCant.push_back(1);
    listaCant.push_back(2);
    listaCant.push_back(6);
    Fecha fechacompra(24,11,2025);
    int codigo1=1;


    vector<Producto*> listaProduc3;
    listaProduc3.push_back(p1);
    listaProduc3.push_back(p6);
   
    

    vector<int> listaCant2;
    listaCant2.push_back(2);
    listaCant2.push_back(6);
    Fecha fechacompra2(23,11,2025);
    int codigo2=2;


    almacen->CrearVenta(listaProduc2,listaCant,fechacompra,codigo1);
    almacen->CrearVenta(listaProduc3,listaCant2,fechacompra2,codigo2);

    almacen->listarInformacion();
    
    


    return 0;
}
