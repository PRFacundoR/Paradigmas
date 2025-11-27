#include <iostream>
#include "Persona.h"

Persona::Persona(int edad, const string& bio, const string& nombre)
{
    Edad=edad;
    Biografia=bio;
    Nombre=nombre;
}

int Persona::getEdad()
{
    return Edad;
}

string Persona::getBiografia()
{
    return Biografia;
}

string Persona::getNombre()
{
    return Nombre;
}
