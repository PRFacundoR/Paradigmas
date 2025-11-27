#include "Inmobiliaria.h"

Inmobiliaria::Inmobiliaria(int codigoAFIP, string nombreEmpresa, string CUIT)
{
    this->codigoAFIP = codigoAFIP;
    this->nombreEmpresa = nombreEmpresa;
    this->CUIT = CUIT;
}

Inmobiliaria::~Inmobiliaria()
{

    vector<Alquiler *>::iterator it;
    for (it = alquileres.begin(); it != alquileres.end(); ++it)
    {
        delete (*it);
    }
    alquileres.clear();
    cout << endl
         << "se borro la inmobiliaria" << endl;
}

Alquiler *Inmobiliaria::alquilar(int codigo, int idCliente, const Fecha &Inicio, const Fecha & Fin, Inmueble *inmueble)
{
    Alquiler *nuevoAlquiler;
    int anios;
    int mes;
    int resultado1 = Fin.getAnio() - Inicio.getAnio();
    if (resultado1 > 0)
    {

        anios = Fin.getAnio() - Inicio.getAnio();
    }
    else
    {
        anios = 0;
    }
    mes = Fin.getMes() - Inicio.getMes();

    int resultado = anios * 12 + mes;

    if (resultado > 6)
    {
        
        nuevoAlquiler = new Permanente(codigo, idCliente, Inicio, Fin, inmueble);
    }
    else
    {
        nuevoAlquiler = new Temporal(codigo, idCliente, Inicio, Fin, inmueble);
    }

    alquileres.insert(alquileres.begin(), nuevoAlquiler);

    return nuevoAlquiler;
}

void Inmobiliaria::resumen()
{
    double comision = 0;
    vector<Alquiler *>::const_iterator it;
    for (it = alquileres.begin(); it != alquileres.end(); ++it)
    {
        (*it)->listarInformacion();
        comision += 0.1 * (*it)->calcularCosto();
    }

    cout << endl
         << "comision total: " << comision << endl;
}
