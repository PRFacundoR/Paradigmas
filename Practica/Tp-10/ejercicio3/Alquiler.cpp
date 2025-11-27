#include "Alquiler.h"

int Alquiler::getCantidadMeses()
{
    int anios;
    int mes;
    if(fechaFin.getAnio()-fechaInicio.getAnio()>0){

        anios=fechaFin.getAnio()-fechaInicio.getAnio();
    }else
    {
        anios=0;
    }
        mes=fechaFin.getMes()-fechaInicio.getMes();
    
    
    


    return anios*12+mes;
}

Alquiler::Alquiler(int codigo, int idCliente, const Fecha & fechaInicio, const Fecha & fechaFin, Inmueble *inmueble)
{
    this->codigo=codigo;
    this->idCliente=idCliente;
    this->fechaInicio=fechaInicio;
    this->fechaFin=fechaFin;
    this->inmueble=inmueble;
}

Alquiler::~Alquiler()
{
    cout<<endl<<"se borro el alquiler"<<endl;
}

void Alquiler::listarInformacion()
{
    cout<<"Codigo de alquiler: "<<codigo<<endl;
    cout<<"Cliente: "<<idCliente<<endl;
    cout<<"fecha inicio: "<<fechaInicio<<endl;
    cout<<"fecha fin: "<<fechaFin<<endl;
    cout<<endl<< "Informacion del inmueble"<<endl;
     if (this->inmueble != nullptr)
    {
        // Línea descomentada y protegida
    cout<<"Codigo del inmueble: "<<this->inmueble->getCodigo()<<endl; 
    cout<<"Monto mensual del inmueble: "<< this->inmueble->getMontoMensual()<<endl;
    }
    else
    {
        cout<<"ERROR: No se pudo acceder a la información del Inmueble (Puntero Nulo)."<<endl;
    }
}
