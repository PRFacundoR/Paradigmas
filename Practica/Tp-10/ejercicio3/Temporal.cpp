#include "Temporal.h"

const double Temporal:: INTERES_MENSUAL=0.015;

Temporal::Temporal(int codigo, int idCliente, const Fecha& fechaInicio, const Fecha& fechaFin, Inmueble *inmbueble):Alquiler(codigo,idCliente,fechaInicio,fechaFin,inmueble)
{
}

Temporal::~Temporal()
{
        cout<<endl<<"se borro el alquiler temporal"<<endl;

}

void Temporal::listarInformacion()
{
    Alquiler::listarInformacion();
    cout<<"Interes mensual: "<<INTERES_MENSUAL<<endl;
}

double Temporal::calcularCosto()
{
    double montoAcc= inmueble->getMontoMensual();
    int cantMeses= getCantidadMeses();
    for (int i = 0; i < cantMeses; i++)
    {
        montoAcc+=INTERES_MENSUAL*montoAcc;
    }
    
    return montoAcc;
}
