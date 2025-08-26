#include <iostream>
#include <istream>
#include "Vector.h"
using namespace std;

ostream& operator<<(ostream& salida, Vector V){
    for (int i = 0; i < V.max; i++)
    {
        salida<< V.elemento[i] << endl;
    }
    
    salida<<"max="<<V.max;
    return salida;
}

istream& operator>>(istream& entrada, Vector &V){
    
    
    V.elemento = new int[V.max];
    for (int i = 0; i < V.max; i++)
    {
        cout << "Elemento " << i << ": ";
        entrada >> V.elemento[i];
    }
    
    return entrada;

}