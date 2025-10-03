#include <istream>
#include <iostream>
#include "Vector.h"
using namespace std;

typedef int item;
#define indefinido -99999
Vector:: Vector(unsigned int n = 10){
    if (!reservarMemoria( n))
    {   
        elemento = new item[0];
    } 
}


Vector:: Vector(const Vector &V){
    max=V.max;

    elemento=new item[max];

    for (int i = 0; i < max; i++)
    {
        elemento[i]=V.elemento[i];
    }
    

}
Vector:: ~Vector(){

    delete[] elemento;
    max = 0;
}



item& Vector:: element(unsigned int p){
    if (p < capacidad())
    {
        return elemento[p]; 

    }else
    {
        return elemento[0];
    }
}

unsigned int Vector::capacidad(){
    return max;
}


bool Vector:: reservarMemoria(unsigned int n){
    elemento = new item[n];
    max=n;

    for (int i = 0; i < n; i++)
    {
        elemento[i]=indefinido;
    }  
    if (elemento==nullptr)
    {
        return false;
    }else
    {
        return true;
    }
    
}
bool Vector:: redimensionar(unsigned int n){
    int tam=capacidad();



    item *aux= new item[tam];

    for (int i = 0; i < tam; i++)
    {
        aux[i]=elemento[i];
    }






    elemento = new item[n+1];
    max=n+1;
    
    for (int i = 0; i < n+1; i++)
    {
        if(i<tam){
            elemento[i]= aux[i];      

        }else
        {
            elemento[i]=indefinido;
        }
        
        
    }

    delete[] aux;

    if (elemento==nullptr)
    {
        return false;
    }else
    {
        return true;
    }

}
void Vector:: insertar(unsigned int p, item x){

    if (p < capacidad())
    {
        elemento[p]=x;    

    }else
    {
        redimensionar(p);

        elemento[p]=x;
    }
    
    
}

void Vector:: borrar(unsigned int p){
    if(p<max){
        elemento[p]=indefinido;
    }

}
void Vector:: borrar(){
for (int i = 0; i < max; i++)
    {
        
        elemento[i]=indefinido;

    }

}
bool Vector:: operator==(Vector V2){

    if (max==V2.max)
    {
        for (int i = 0; i < max; i++)
        {
            if (elemento[i]!=V2.elemento[i])
            {
                return false;
            }
            
        }
        

    }else{

        return false;
    }
    
    return true;
}
