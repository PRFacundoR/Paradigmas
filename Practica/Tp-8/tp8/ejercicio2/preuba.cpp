#include <iostream>
#include "SistemaAlquiler.h"
#include "Moto.h"
#include "Auto.h"

using namespace std;


int main()
{
    string patente1="112233";
    string marca1="Peugote";
    string titular1="juan";
    float preciobase1=100000;
    int modelo1=2025;
    Fecha f1(1,12,2000);
    int capacidad=7;

    string patente2="333445";
    string marca2="toyota";
    string titular2="pedro";
    float preciobase2=40000;
    //double cilindrada=300;
    double cilindrada=700;
    
    


    Vehiculo* auto1=new Auto(patente1,marca1,titular1,preciobase1,modelo1,f1,capacidad);

    Vehiculo* moto1=new Moto(patente2, marca2, titular2, preciobase2,cilindrada);

    cout<< "moto"<<endl;
    moto1->listarInformacion();
    cout<<endl<<"auto"<<endl;
    auto1->listarInformacion();


    cout<<endl<<"alquiler"<<endl;

    SistemaAlquiler SysA;
    Fecha fI1(1,12,2022);
    Fecha fI2(1,4,2022);


    Fecha fF1(1,12,2024);
    Fecha fF2(1,12,2024);
    
    string DNI1="12345";
    string DNI2="45677";

    string cod1="123";
    string cod2="345";


    Alquiler *aux1= SysA.crearAlquiler(fI1,fF1,auto1,DNI1,cod1);
    Alquiler *aux2= SysA.crearAlquiler(fI2,fF2,moto1,DNI2,cod2);

    Fecha fI3(1,12,2023);
    Fecha fF3(1,12,2023);
    SysA.listarAlquileres(fI3,fF3);

    int anio=2024;
    int mes=12;

    cout<<endl<<"recaudacion total: "<<SysA.calcularRecaudacio(mes,anio);

    


    


    delete aux2;
    delete aux1;
    delete moto1;
    delete auto1;

    


    return 0;
}
