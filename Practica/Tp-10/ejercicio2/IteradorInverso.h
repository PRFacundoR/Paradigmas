#ifndef ITERADORINVERSO_H_
#define ITERADORINVERSO_H_
#include "conjunto.h"
#include<iostream>
#include "Iterador.h"
using namespace std;
template< class T>
class IteradorInverso: public Itera<T>
{
private:
       
public:
    IteradorInverso(const Conjunto<T>&c):Itera<T>(c){
        this->i=this->conj.indice-1;
    };
    
    bool hayMasElementos(){
		return this->i>=0;

	};
    T elementoActual(){
        this->actual=this->conj.elementos[this->i];
		return this->actual;
	};

    void avanzar(){
        
        this->i--;
        
        

	};

};

#endif

