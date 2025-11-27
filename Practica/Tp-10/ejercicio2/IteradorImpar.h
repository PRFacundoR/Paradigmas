#ifndef ITERADORIMPAR_H_
#define ITERADORIMPAR_H_
#include "conjunto.h"
#include "Iterador.h"
#include<iostream>
using namespace std;
template< class T>
class IteradorImpar:public Itera<T>
{

        
public:
    IteradorImpar(const Conjunto<T>&c):Itera<T>(c){this->i=1;};
    
    bool hayMasElementos(){
		return this->i<this->conj.indice;

	};
    T elementoActual(){
        this->actual=this->conj.elementos[this->i];
		return this->actual;
	};

    void avanzar(){
        
       this->i += 2; 
        
	};

};

#endif