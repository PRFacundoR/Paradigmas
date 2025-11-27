#include <iostream>
#include "IteradorDeConjunto.h"
#include "conjunto.h"
#include"Fecha.h"
using namespace std;

template<class T>
bool pertenece(Conjunto<T> &c, T X);

int main(int argc, char const *argv[])
{
    Conjunto<int> c;
    c.agregar(1);
    
    c.agregar(10);
    
    c.agregar(2);
    
    c.agregar(3);

    
    c.agregar(6);

    c.agregar(7);

    if (pertenece(c,7))
    {
        cout<<"si ta el elemento"<<endl;
    }else{
        
        cout<<"no ta el elemento"<<endl;
    }
    


    Conjunto<Fecha> conjF;

    conjF.agregar(Fecha(1,2,2025));
    conjF.agregar(Fecha(4,12,2023));

    
    if (pertenece(conjF,Fecha(5,12,2023)))
    {
        cout<<"si ta el elemento"<<endl;
    }else{
        
        cout<<"no ta el elemento"<<endl;
    }
    
   conjF.escribir();
    return 0;
}


template<class T>
bool pertenece(Conjunto<T> &c, T X){

    IteradorDeConjunto<T> IC(c);

    while (IC.hayMasElementos())
    {
        if (IC.elementoActual()==X)
        {
            return true;
        }else
        {
            IC.avanzar();
        }
        
        
    }
    
    return false;

}