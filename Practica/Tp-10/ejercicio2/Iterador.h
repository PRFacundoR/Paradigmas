#ifndef ITERA_H_
#define ITERA_H_
#include "conjunto.h"
#include<iostream>
using namespace std;


template<class T>
class Itera
{
protected:
        const Conjunto<T> &conj;
        T actual;
        int i;
public:
    Itera(const Conjunto<T>&c):conj(c){};
    
    virtual bool hayMasElementos()=0;
    virtual T elementoActual()=0;
    virtual void avanzar()=0;

};

#endif