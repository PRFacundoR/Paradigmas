#include <iostream>
//#include "Persona.h"
#include "Pelicula.h"
#include "Fecha.h"
#include "PeliculaInternacional.h"
#include "PeliculaNacional.h"
#include <string>
using namespace std;

int main()
{
    Persona *juan=new Persona(32,"nacio en arg", "Juan");
    Persona *pedro=new Persona(33,"nacio en uru", "Pedro");

    Fecha *f1=new Fecha(1,4,2022);
    Fecha *f2=new Fecha(6,1,2020);

    string desc1="La rosa de guadalupe";
    string pais1="Mexico";
    float precio1=20000;

    string desc2="La Nonna";

    float precio2=12000;
    

    Pelicula* pI=new PeliculaInternacional(desc1,juan,f1,precio1,pais1);
    Pelicula* pN= new PeliculaNacional(desc2,juan,f2,precio2);

    cout<<"Peli Internacional"<<endl;
    pI->listarInformacion();
    cout<<endl<<"costo: "<<pI->calcularCosto();

    cout<<endl<<"Peli Nacional"<<endl;
    pN->listarInformacion();    
    cout<<endl<<"costo: "<<pN->calcularCosto();

    delete pI;
    
    cout<<endl;
    delete pN;
    cout<<endl<<"xd"<<endl;

    cout<<juan->getNombre()<<endl;
    cout<<pedro->getNombre();

    delete juan;
    delete pedro;
    delete f1;
    delete f2;

    return 0;
}
