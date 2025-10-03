#include "cuenta.cpp"
#include <iostream>
using namespace std;

void transferir(cuenta &c1, cuenta &c2, double monto);

int main(int argc, char const *argv[])
{
    cuenta c1;
    c1.crear(123,456,900);
    cuenta c2;
    c2.crear(222,432,500);

    transferir(c1,c2,900);

    c1.mostrarInformacion();
    cout<< endl;
    cout<< endl;
    c2.mostrarInformacion();


    return 0;
}

void transferir(cuenta &c1, cuenta &c2, double montoE){
    if (c1.getSaldo()>=montoE)
    {
    
        c1.extraer(montoE);
        c2.depositar(montoE);
       
    }else{
        cout<<"saldo insuficiente, ingrese un valor existente";
    }
    

    

    
}
