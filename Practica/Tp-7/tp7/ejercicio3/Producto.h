//============================================================================
// PARADIGMAS DE PROGRAMACION - 2025
// Producto.h
//============================================================================

#ifndef PRODUCTO_H_
#define PRODUCTO_H_

#include <iostream>
using namespace std;

class Producto{
	int codigo;
	string descripcion;
	double precio;
	static double const INCREMENTO; //Al ser un atributo estático y constante esta permitida
										   //la inicializacion en la declaracion de la clase
public:
    Producto();
	Producto(int &codigo,const string &descripcion, double &precio);


	void listarInformacion();
	double calcularPrecioDeVenta();
	int getCodigo();
	~Producto();

};

#endif /* PRODUCTO_H_ */
