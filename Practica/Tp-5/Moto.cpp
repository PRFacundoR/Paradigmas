#include <iostream>
#include <string>
#include "Fecha.h"
#include "Moto.h"
using namespace std;

int Moto:: Patente(){
    return patente;
}

string Moto:: NombreTitular(){
    return NombreTit;
}





void Moto:: Datos(){
    cout << "Datos del Moto";

    cout<<"Patente: "<< Patente()<<endl;
    
    cout<<"Marca: "<< Marca<<endl;

    cout<<"Nombre del Titular: "<< NombreTitular()<< endl;

    cout<<"Cilindrada: "<< Cilindrada()<<endl;
}


double Moto:: CostoAlquiler(Fecha fechaActual){
    double precio= Precio;

    if (cilindrada>250 && cilindrada<=600){
        precio*=1.25;
        if (cilindrada>600)
        {
            precio*=1.50;
        }
        
    }

    return precio;

}

int Moto:: Cilindrada(){
    return cilindrada;
}