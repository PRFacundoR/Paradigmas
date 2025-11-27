#include "SistemaAlquiler.h"
#include <algorithm>
using namespace std;

SistemaAlquiler::~SistemaAlquiler()
{
    vector<Alquiler *>::iterator it;
    for (it = alquileres.begin(); it != alquileres.end(); it++)
    {
        delete (*it);
    }
    alquileres.clear();
}


Alquiler* SistemaAlquiler::crearAlquiler(const Fecha &ini,const Fecha &fin,Vehiculo *Vehi, const string &Dni, const string &codigo)
{
    Alquiler *nuevo = new Alquiler(codigo, ini, fin, Dni, Vehi);
    alquileres.insert(alquileres.end(), nuevo);

    return nuevo;
    
}

void SistemaAlquiler::listarAlquileres(const Fecha &ini, const Fecha &fin)
{
    cout << "Alquileres entre " << ini.getDia() << '/' << ini.getMes() << '/' << ini.getAnio() << " y " << fin.getDia() << '/' << fin.getMes() << '/' << fin.getAnio() << endl;
    vector<Alquiler *>::iterator it;
    for (it = alquileres.begin(); it != alquileres.end(); it++)
    {
        if ((*it)->getIicio()<ini && fin< (*it)->getFin() )
        {
            (*it)->listarInfo();
        }
        
        
    }
}

float SistemaAlquiler::calcularRecaudacio(const int& mes, const int &anio)
{
    float recaudacion=0;
    vector<Alquiler *>::iterator it;

    for (it = alquileres.begin(); it != alquileres.end(); it++)
    {
        if ((*it)->getFin().getMes()==mes && (*it)->getFin().getAnio()==anio)
        {
            recaudacion+=(*it)->calcularAlquiler();
        }
        
    }
    return recaudacion;

}
