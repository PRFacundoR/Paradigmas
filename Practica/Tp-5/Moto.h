#include <iostream>
#include <string>

using namespace std;

class Moto
{
private:
    int patente;
    string Marca;
    double Precio;
    string NombreTit;
    int cilindrada;


public:
int Patente();
string NombreTitular();
void Datos();
double CostoAlquiler(Fecha fechaActual);
int Cilindrada();


};

