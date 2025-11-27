#ifndef ITERADORDECONJUNTO_H_
#define ITERADORDECONJUNTO_H_

#include <iostream>
#include"conjunto.h"
#include "Iterador.h"
class IteradorDeConjunto: public Itera
{
private:
    
    
public:
    IteradorDeConjunto(const Conjunto &c):Itera(c){

        i=0;
        actual = c.elementos[0];
    };
   // ~IteradorDeConjunto(); no tiene?
    bool hayMasElementos(){
		return i<conj.indice;

	};
    item elementoActual(){
        actual=conj.elementos[i];
		return actual;
	};

    void avanzar(){
        i++;
	};

};






#endif