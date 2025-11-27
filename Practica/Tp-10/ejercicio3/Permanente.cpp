#include "Permanente.h"

Permanente::Permanente(int codigo, int idCliente, const Fecha& fechaInicio, const Fecha& fechaFin, Inmueble *inmueble):Alquiler(codigo,idCliente,fechaInicio,fechaFin,inmueble){


}

Permanente::~Permanente()
{

    cout<<endl<<"se borro el alquiler permanente"<<endl;

}

double Permanente::calcularCosto()
{
    double monto=(getCantidadMeses()+2)*inmueble->getMontoMensual();
    return monto;
}
