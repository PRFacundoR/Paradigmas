#ifndef ITERADORDECONJUNTO_H_
#define ITERADORDECONJUNTO_H_

#include <iostream>
#include"conjunto.h"
#include "Iterador.h"

template< class T>
class IteradorDeConjunto: public Itera<T>
{
private:
    
    
public:
    IteradorDeConjunto(const Conjunto<T> &c):Itera<T>(c){

        this->i=0;
        this->actual = c.elementos[0];
    };
   // ~IteradorDeConjunto(); no tiene?
    bool hayMasElementos(){
		return this->i < this->conj.indice;

	};
    T elementoActual(){
        this->actual=this->conj.elementos[this->i];
		return this->actual;
	};

    void avanzar(){
         this->i++;
	};

};






#endif