#include <iostream>
#include "cuenta.h"
using namespace std;

void cuenta::crear(int num, long int titularDni, double monto=0){
        
        Numero=num;
        DniTitular=titularDni;
        if (monto>=0)
        {
           Saldo=monto;
        }else
        {
            Saldo=0;
        }


}

bool cuenta:: depositar(double monto){
    if (monto>=0)
    {
        Saldo+=monto;
    }else
    {
        Saldo+=0;
    }
    return true;
    

}
bool cuenta:: extraer(double monto){
    if ( Saldo >= monto && monto>=0)
    {
        Saldo-=monto;
    }else
    {
        return false;
    }
    return true;
}

double cuenta:: getSaldo(){
    return Saldo;
}
void cuenta:: mostrarInformacion(){
    cout<< "saldo: "<< Saldo<< endl;
    
    cout<< "Dni: "<< DniTitular<< endl;

    cout<< "Numero de cuenta: "<< Numero;
}