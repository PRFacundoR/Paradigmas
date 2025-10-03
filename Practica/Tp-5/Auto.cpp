#include <iostream>
#include <string>
#include "Fecha.h"
#include "Auto.h"
using namespace std;

int Auto:: Patente(){
    return patente;
}

string Auto:: NombreTitular(){
    return NombreTit;
}

void Auto:: VTVVencida(Fecha fechaActual){
    if( FecVencVTV < fechaActual){
        cout<< "VTV vencida";

    }else{
        cout<< "VTV no vencida";
    }
}

int Auto:: Antiguedad(Fecha fechaActual){

    return fechaActual- Modelo;
}

void Auto:: Datos(){
    cout << "Datos del auto";
    cout<<"Patente: "<< Patente()<<endl;
    
    cout<<"Marca: "<< Marca<<endl;

    cout<<"Nombre del Titular: "<< NombreTitular()<< endl;

    cout<<"Anio del modelo: "<< Modelo.getAnio()<<endl;
    
    cout <<"Fecha de vencimento de la VTV: "<<FecVencVTV.getAnio()<<"/"<<FecVencVTV.getMes()<<"/"<<FecVencVTV.getDia()<<endl;

    cout<<"Capacidad: "<< capacidad<<endl;
}


double Auto:: CostoAlquiler(Fecha fechaActual){
    double precio= Precio;

    if (capacidad>5){
        precio*=1.25;
        if (Antiguedad(fechaActual)<5)
        {
            precio*=1.30;
        }
        
    }

    return precio;

}