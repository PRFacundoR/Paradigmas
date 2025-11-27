#ifndef ITERADORDECONJUNTO_H_
#define ITERADORDECONJUNTO_H_

#include <iostream>
#include"conjunto.h"
class IteradorDeConjunto
{
private:
    int i;
    const Conjunto &conjunto;
    item actual; 
    
public:
    IteradorDeConjunto(const Conjunto &c):conjunto(c),i(0),actual(c.elementos[i]){};
   // ~IteradorDeConjunto(); no tiene?
    bool hayMasElementos(){
		return i<conjunto.indice;

	};
    item elementoActual(){
        actual=conjunto.elementos[i];
		return actual;
	};

    void avanzar(){
        i++;
	};

};






#endif