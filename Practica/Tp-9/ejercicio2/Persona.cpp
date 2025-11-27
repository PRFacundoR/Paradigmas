#include <iostream>
#include "Persona.h"

Persona::Persona(int edad, string bio, string nombre)
{
    Edad=edad;
    Biografia=bio;
    Nombre=nombre;
}

Persona::~Persona()
{
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
