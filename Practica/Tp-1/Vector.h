#include <istream>
#include <iostream>
using namespace std;



typedef int item ;
#define indefinido -99999

typedef struct Vector
{
    item *elemento;
    int max;
    
}Vector;

unsigned int capacidad(Vector V){

    return V.max;
}
bool reservarMemoria(Vector &V, unsigned int n){
    
    V.elemento = new item[n];
    V.max=n;

    for (int i = 0; i < n; i++)
    {
        V.elemento[i]=indefinido;
    }
    
  
    if (V.elemento==nullptr)
    {
        return false;
    }else
    {
        return true;
    }
    


}

bool redimensionar(Vector &V, unsigned int n){
    
    int tam=capacidad(V);



    item *aux= new item[tam];

    for (int i = 0; i < tam; i++)
    {
        aux[i]=V.elemento[i];
    }






    V.elemento = new item[n+1];
    V.max=n+1;
    
    for (int i = 0; i < n+1; i++)
    {
        if(i<tam){
            V.elemento[i]= aux[i];      

        }else
        {
            V.elemento[i]=indefinido;
        }
        
        
    }

    delete[] aux;

    if (V.elemento==nullptr)
    {
        return false;
    }else
    {
        return true;
    }
   
   
}

Vector crearVector(unsigned int n=10){

    Vector V;

    if (!reservarMemoria(V, n))
    {   
        V.elemento = new item[0];
    }
        
    return V; 
    


}

Vector insertar(Vector V, unsigned int p, item x){
    


    if (p < capacidad(V))
    {
        V.elemento[p]=x;    

    }else
    {
        redimensionar(V, p);

        V.elemento[p]=x;
    }
    
    return V;
    
}


item& elemento(Vector V, unsigned int p){ // dif de devolver referencia del valor contra valor buscar explicacion

    if (p < capacidad(V))
    {
        return V.elemento[p]; 

    }else
    {
        return V.elemento[0];
    }
    
        
}


Vector borrar(Vector V, unsigned int p){

    if(p<V.max){
        V.elemento[p]=indefinido;
    }

    return V;
}

Vector borrar(Vector V){

    for (int i = 0; i < V.max; i++)
    {
        
        V.elemento[i]=indefinido;

    }
    return V;

}

Vector destruir(Vector V){

    delete[] V.elemento;
    V.max = 0;
}

bool operator==(Vector V1, Vector V2){

    if (V1.max==V2.max)
    {
        for (int i = 0; i < V1.max; i++)
        {
            if (V1.elemento[i]!=V2.elemento[i])
            {
                return false;
            }
            
        }
        

    }else{

        return false;
    }
    
    return true;

}

