#include <iostream>
#include "IteradorDeConjunto.h"
#include "conjunto.h"
using namespace std;


bool pertenece(Conjunto &c, item X);

int main(int argc, char const *argv[])
{
    Conjunto c;
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
    

    return 0;
}



bool pertenece(Conjunto &c, item X){

    IteradorDeConjunto IC(c);

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