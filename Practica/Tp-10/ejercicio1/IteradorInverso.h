#ifndef ITERADORINVERSO_H_
#define ITERADORINVERSO_H_
#include "conjunto.h"
#include<iostream>
#include "Iterador.h"
using namespace std;

class IteradorInverso: public Itera
{
private:
       
public:
    IteradorInverso(const Conjunto&c):Itera(c){
        i=conj.indice-1;
    };
    
    bool hayMasElementos(){
		return i>=0;

	};
    item elementoActual(){
        actual=conj.elementos[i];
		return actual;
	};

    void avanzar(){
        
        i--;
        
        

	};

};

#endif

