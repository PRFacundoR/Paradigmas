#include <iostream>
#include"Iterador.h"
#include "IteradorDeConjunto.h"
#include "IteradorImpar.h"
#include "IteradorInverso.h"
#include "Fecha.h"
using namespace std;

template<class T>
void mostrarContenido(Itera<T> *it);

int main()
{
    
    Conjunto<int> c;
    c.agregar(1);
    c.agregar(2);
    c.agregar(3);
    c.agregar(4);

    cout<<endl<<"iterador normal"<<endl;
    Itera<int> *it1=new IteradorDeConjunto<int>(c);
    mostrarContenido(it1);
    cout<<endl<<"iterador Inverso"<<endl;
    Itera<int> *it2=new IteradorInverso<int>(c);
    mostrarContenido(it2);
    cout<<endl<<"Iterador Impar"<<endl;
    Itera<int> *it3=new IteradorImpar<int>(c);
    mostrarContenido(it3);



    Conjunto<Fecha> conjF;

    conjF.agregar(Fecha(1,2,2025));
    conjF.agregar(Fecha(4,12,2023));

    cout<<endl<<"iterador normal"<<endl;
    Itera<Fecha> *it4=new IteradorDeConjunto<Fecha>(conjF);
    mostrarContenido(it4);
    cout<<endl<<"iterador Inverso"<<endl;
    Itera<Fecha> *it5=new IteradorInverso<Fecha>(conjF);
    mostrarContenido(it5);
    cout<<endl<<"Iterador Impar"<<endl;
    Itera<Fecha> *it6=new IteradorImpar<Fecha>(conjF);
    mostrarContenido(it6);
    


    return 0;
}

template<class T>
void mostrarContenido(Itera<T> *it)
{
    int i=1;
    while (it->hayMasElementos())
    {
        cout<<"elemento "<<i<<": "<<it->elementoActual()<<endl<<endl;

        it->avanzar();
        i++;
    }
    

}
