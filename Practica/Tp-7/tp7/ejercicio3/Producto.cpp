//============================================================================
// PARADIGMAS DE PROGRAMACION - 2025
// Producto.cpp
//============================================================================

#include <iostream>
#include "Producto.h"
using namespace std;

double const Producto:: INCREMENTO = 0.10;

Producto::Producto(int &codigo,const string &descripcion, double &precio){
	this->codigo = codigo;
	this->descripcion = descripcion;
	this->precio = precio;
}

int Producto::getCodigo()
{
    return this->codigo;
}

void Producto::listarInformacion(){
	cout<<"Producto "<<endl;
	cout<<"        Codigo: "<< this->codigo<<endl;
	cout<<"        Descripcion: "<< this->descripcion<<endl;
	cout<<"        Precio: "<< this->precio<<endl;
	cout<<"        Precio de venta: "<< this->calcularPrecioDeVenta()<<endl;
}

double Producto::calcularPrecioDeVenta(){
	return this->precio*(1 + Producto::INCREMENTO);
}

Producto::~Producto(){
	cout<<"Destructor Producto codigo: "<<this->codigo<<endl;
}


