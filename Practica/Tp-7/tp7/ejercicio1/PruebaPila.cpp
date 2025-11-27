#include <iostream>
using namespace std;

#include "Pila.h"
#include "Producto.h"

int main()
{
    Producto *p1=new Producto(1,"leche",100);
    Producto *p2=new Producto(2,"chocolate",220);
    Producto *p3=new Producto(3,"leche con chocolate",290);

    p1->listarInformacion();
    cout<<endl;
    p2->listarInformacion();
    cout<<endl;
    p3->listarInformacion();


    // error? no da error
    Pila *pila=new Pila(2);
    pila->push(p1);
    pila->push(p2);
    pila->push(p3);

    pila->escribir();

    //error? no
    cout<< "pila 2";
    Pila *pila2=new Pila(4);
    pila2->push(p1);
    pila2->push(p2);
    pila2->push(p3);
    pila2->push(p2);
    pila2->escribir();


    //error? no

    pila2->pop();
    pila2->escribir();
    cout<<endl;

    //anda?
    (pila2->top())->listarInformacion();//sobrecargarlo

    cout<<endl;
    delete pila2;
    delete pila;

    cout<< "pila borrada"<<endl;
    p1->listarInformacion();
    cout<<endl;
    p2->listarInformacion();
    cout<<endl;
    p3->listarInformacion();


   


    return 0;
}
