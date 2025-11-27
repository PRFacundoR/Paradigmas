#include <iostream>
#include "Fecha.h"
#include "Inmueble.h"
#include "Alquiler.h"
#include "Permanente.h"
#include "Temporal.h"
#include "Inmobiliaria.h"


using namespace std;

int main()
{
   
   //Inmobiliaria *inmobi= new Inmobiliaria(123,"la gran","334455");
   Inmobiliaria inmobi(123,"la gran","334455");

   Inmueble* inmueble1= new Inmueble(1,"casa","la tuya", 50000.0);
    
   Inmueble *inmueble3= new Inmueble(3,"auto","la tuya3", 40000.0);
    
   Inmueble *inmueble2= new Inmueble(2,"cabaña","la tuya2", 1000000.0);
    
   Inmueble *inmueble4= new Inmueble(4,"tienda","la tuya4", 600000.0);

    Fecha fI1(1,11,2020);
    Fecha fF1(1,2,2021);

    int anios;
    anios=fF1.getAnio()-fI1.getAnio();
    cout<<"anios: "<<anios<<endl;

    inmobi.alquilar(1,12,fI1,fF1,inmueble1);

    Fecha fI2(1,2,2020);
    Fecha fF2(1,3,2020); 
  
    inmobi.alquilar(2,33,fI2,fF2,inmueble2);

    Fecha fI3(1,12,2019);
    Fecha fF3(1,12,2020);
    
    inmobi.alquilar(4,8,fI3,fF3,inmueble4);

    Fecha fI4(1,2,2024);
    Fecha fF4(1,9,2025);
    
    inmobi.alquilar(3,4,fI4,fF4,inmueble3);
    cout<<endl<<"RESUMEN DE LA INMOBILIARIA"<<endl;
    inmobi.resumen();
    



  // ¡ORDEN CORREGIDO DE ELIMINACIÓN!
    // 1. ELIMINA EL CONTENEDOR (INMOBILIARIA) PRIMERO:
    //delete inmobi; // La inmobiliaria usa los alquileres, que usan los inmuebles.

    // 2. ELIMINA LOS OBJETOS INMUEBLES DESPUÉS:
    delete inmueble4;
    delete inmueble2;
    delete inmueble3;
    delete inmueble1;

    cout<<endl<<"eciste?"<<endl;
    //x->listarInformacion();
      
    return 0;
}
