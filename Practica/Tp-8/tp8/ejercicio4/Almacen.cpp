#include "Almacen.h"

Almacen::Almacen(vector<Producto *> listaProducto)
{
    this->listaProducto=listaProducto;
}

Almacen::~Almacen()
{
    vector<Venta*>:: iterator it;
    for (it=listaVentas.begin() ; it!=listaVentas.end(); ++it)
    {
        delete (*it);
    }

    listaVentas.clear();
}

void Almacen::CrearVenta(vector<Producto *> productos, vector<int> cantidades, const Fecha&fech, const int&codigo)
{
    int cant=productos.size();
//falta if para ver si los productos estan en el almacen o no
    Venta* nuevaVenta=new Venta(codigo,fech);

    for (int i = 0; i < cant; i++)
    {
        nuevaVenta->agregar(productos[i],cantidades[i]);
    }
    listaVentas.push_back(nuevaVenta);
    
}

double Almacen::calcularMontoTotalVentas(/*int &mes, int &anio*/)
{
    double total=0;
    vector<Venta*> :: iterator it;
    for ( it=listaVentas.begin(); it!=listaVentas.end(); ++it)
    {
        //falta if
       total+=(*it)->calcularMontoTotal();
    }
    

    return total;
}

void Almacen::listarInformacion()
{   
    int i=1;
    vector<Venta*> :: iterator it;
    for ( it=listaVentas.begin(); it!=listaVentas.end(); ++it)
    {
       cout<< "venta "<< i<<endl;
       (*it)->listarInformacion();
       cout<<endl<<"Monto total "<<(*it)->calcularMontoTotal()<<endl;
       i++;

       cout<<endl<<endl<<endl;

    }

    cout<<endl<<"Monto total de todas las ventas"<<calcularMontoTotalVentas()<<endl;


}
