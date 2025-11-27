#ifndef ITERADORIMPAR_H_
#define ITERADORIMPAR_H_
#include "conjunto.h"
#include "Iterador.h"
#include<iostream>
using namespace std;

class IteradorImpar:public Itera
{

        
public:
    IteradorImpar(const Conjunto&c):Itera(c){i=1;};
    
    bool hayMasElementos(){
		return i<conj.indice;

	};
    item elementoActual(){
        actual=conj.elementos[i];
		return actual;
	};

    void avanzar(){
        
        i += 2; 
        
	};

};

#endif