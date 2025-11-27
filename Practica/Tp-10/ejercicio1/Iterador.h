#ifndef ITERA_H_
#define ITERA_H_
#include "conjunto.h"
#include<iostream>
using namespace std;

class Itera
{
protected:
        const Conjunto &conj;
        item actual;
        int i;
public:
    Itera(const Conjunto&c):conj(c){};
    
    virtual bool hayMasElementos()=0;
    virtual item elementoActual()=0;
    virtual void avanzar()=0;

};

#endif