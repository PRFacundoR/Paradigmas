
#include <iostream>
#include <istream>
#include "Vector.h"
using namespace std;

ostream& Vector:: operator<<(ostream& salida){
    for (int i = 0; i < max; i++)
    {
        salida<< elemento[i] << endl;
    }
    
    salida<<"max="<<max;
    return salida;

}
istream& Vector:: operator>>(istream& entrada){
   elemento = new int[max];
    for (int i = 0; i < max; i++)
    {
        cout << "Elemento " << i << ": ";
        entrada >> elemento[i];
    }
    
    return entrada;
}