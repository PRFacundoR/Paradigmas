#include <iostream>
#include "Sistema.h"
#include "Producto.h"
#include "Fecha.h"
#include "Pedido.h"
using namespace std;

int main(int argc, char const *argv[])
{

    Producto **prod = new Producto *[4];

    // --- En tu código .cpp ---
    int cod = 1;
    string desc = "Mayonesa";
    double prec = 200.0;

    // Primer producto (Ejemplo original)
    prod[0] = new Producto(cod, desc, prec); // Esto sí coincide

    // --- TRES PRODUCTOS ADICIONALES ---

    // Producto 2 (usando variables inline)
    int cod2 = 2;
    string desc2 = "Ketchup";
    double prec2 = 150.50;
    prod[1] = new Producto(cod2, desc2, prec2);

    // Producto 3 (usando variables inline)
    int cod3 = 3;
    string desc3 = "Mostaza";
    double prec3 = 180.0;
    prod[2] = new Producto(cod3, desc3, prec3);

    // Producto 4 (usando literales directamente,
    int cod4 = 4;
    string desc4 = "Mostaza";
    double prec4 = 180.0;
    prod[3] = new Producto(cod4, desc4, prec4);


    int cod5 = 5;
    string desc5 = "Mostazaasas";
    double prec5 = 180.033;



    Producto *p=new Producto(cod5,desc5,prec5);
    cout<< "Prueba 0"<<endl;
    prod[1]->listarInformacion();
    cout << endl;
    cout << endl;


    Fecha FE(1,2,2022);
    Fecha FP(31,1,2022);
    Fecha FA(31,1,2022);

    int cantProd=4;
    Sistema *sis=new Sistema(cantProd,prod);

    cout<< "Prueba 1"<<endl;
    sis->listarPedidos(FA);
    cout << endl;
    cout << endl;


    cout<< "Prueba 2"<<endl;
    sis->agregarProducto(p);



    string idCliente1="1";
    string idCliente2="2";
    string idCliente3="3";
    string idCliente4="4";

    

    sis->registrarPedido(FP,idCliente1, cod,Debito);
    sis->registrarPedido(FP,idCliente1, cod2,Credito);


    sis->listarPedidos(FA);

    cout << endl;
    cout << endl;

    cout<<"productos"<<endl;

    //sis->aux();

    delete sis;

    
    delete p;
    delete prod[3];
    delete prod[2];
    delete prod[1];
    delete prod[0];
    delete [] prod;

    sis->listarPedidos(FA);


    return 0;
}
