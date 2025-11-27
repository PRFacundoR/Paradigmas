#include "Tienda.h"
#include "CompraDeContado.h"
#include"CompraEnCuotas.h"

Tienda::Tienda(string &nom, string &dir)
{
    nombre=nom;
    direccion=dir;
}

Tienda::~Tienda()
{
    vector<Compra*>::iterator it;

    for (it=compras.begin(); it!=compras.end()  ; ++it)
    {
        delete (*it);
    }
    compras.clear();
    

}

void Tienda::generarCompras(const int &cod,const  Fecha &fec,const  int &cant, vector<Producto *> prod)
{
    Compra *compra=new CompraEnCuotas(cod,fec,prod,cant);
    compras.push_back(compra);


}

void Tienda::generarCompras(const int &cod,const  Fecha &fec,  vector<Producto *> prod)
{
    Compra *compra=new CompraDeContado(cod,fec,prod);
    compras.push_back(compra);


}

void Tienda::resumenCompras(int &mes, int &anio)
{

    vector<Compra*> ::iterator it;
    int i=0;
    for (it=compras.begin(); it!=compras.end(); ++it)
    {
        
        if ((*it)->getFecha().getAnio()==anio && (*it)->getFecha().getMes()==mes)
        {
            cout<<"Compra numero "<<i+1<<endl;
            (*it)->escribirInfo();
            cout<<endl;
            cout<<endl<<"Monto Total: "<<(*it)-> calcularMonto()<<endl;
            i++;
        }
        

    }
    

}



