#include <iostream>
#include <string.h>
using namespace std;

class Persona
{
private:
    int Edad;
    string Biografia;
    string Nombre;
public:
    Persona(int edad,const string  & bio, const string & nombre);
    ~Persona();

    int getEdad();
    string getBiografia();
    string getNombre();
};


