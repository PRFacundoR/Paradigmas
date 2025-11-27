#ifndef ITERADORDECONJUNTO_H_
#define ITERADORDECONJUNTO_H_

#include <iostream>
#include"conjunto.h"
template<class T>
class IteradorDeConjunto
{
private:
    int i;
    const Conjunto<T> &conjunto;
    T actual; 
    
public:
    IteradorDeConjunto(const Conjunto<T> &c):conjunto(c),i(0),actual(c.elementos[i]){};
   // ~IteradorDeConjunto(); no tiene?
    bool hayMasElementos(){
		return i<conjunto.indice;

	};
    T elementoActual(){
        actual=conjunto.elementos[i];
		return actual;
	};

    void avanzar(){
        i++;
	};

};






#endif