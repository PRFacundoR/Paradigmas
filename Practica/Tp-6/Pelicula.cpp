#include <iostream>
#include <string>
using namespace std;

#include "Pelicula.h"

Pelicula :: Pelicula(){

    codigo=000;
    director="pepe";
    estreno=false;
    precioBase=-9999999;
    tipoPelicula=N;

}

Pelicula:: Pelicula(bool estreno,float precioBase,Tipo tipoPelicula){
    
    this->codigo=autonumerico++;
    this->estreno=estreno;
    this->precioBase=precioBase;
    this->tipoPelicula=tipoPelicula;

}

Pelicula:: Pelicula(const Pelicula &p){
    this->codigo=autonumerico++;
    this->director=p.director;
    this->estreno=p.estreno;
    this->precioBase=p.precioBase;
    this->tipoPelicula=p.tipoPelicula;
}

int Pelicula:: autonumerico=0;


Pelicula:: ~Pelicula(){

    cout<< "Se elimino la pelicula "<< codigo<<endl;
}


int Pelicula::getAutonumerico(){
    return autonumerico;

}

void Pelicula::setDirector(string nombre){
    this->director=nombre;

}

//void Pelicula:: listarInformacion()const{



float Pelicula:: calcularCosto()const{
    float costo=precioBase;
    if (tipoPelicula==I){
        costo*=1.30;
    }else{
        if(estreno==false){
            costo*=0.8;
        }
    }

    return costo;
}

Pelicula P1;