#include <iostream>
using namespace std;

class cuenta
{
private:
   int Numero;
   long int DniTitular;
   double Saldo;
public:
   // cuenta(/* args */);
   //~cuenta();
   void crear(int num, long int titularDni, double monto);
   bool depositar(double monto);
   bool extraer(double monto);
   double getSaldo();
   void mostrarInformacion();
};


