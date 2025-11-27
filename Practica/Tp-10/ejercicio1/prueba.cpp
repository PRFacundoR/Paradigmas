#include <iostream>
#include"Iterador.h"
#include "IteradorDeConjunto.h"
#include "IteradorImpar.h"
#include "IteradorInverso.h"
using namespace std;

void mostrarContenido(Itera *it);

int main()
{
    
    Conjunto c;
    c.agregar(1);
    c.agregar(2);
    c.agregar(3);
    c.agregar(4);

    cout<<endl<<"iterador normal"<<endl;
    Itera *it1=new IteradorDeConjunto(c);
    mostrarContenido(it1);
    cout<<endl<<"iterador Inverso"<<endl;
    Itera *it2=new IteradorInverso(c);
    mostrarContenido(it2);
    cout<<endl<<"Iterador Impar"<<endl;
    Itera *it3=new IteradorImpar(c);
    mostrarContenido(it3);
    


    return 0;
}

void mostrarContenido(Itera *it)
{
    int i=1;
    while (it->hayMasElementos())
    {
        cout<<"elemento "<<i<<": "<<it->elementoActual()<<endl<<endl;

        it->avanzar();
        i++;
    }
    

}
