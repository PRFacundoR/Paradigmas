/*
 * Pila.h
 */

#ifndef PILA_H_
#define PILA_H_
#include <iostream>
#include "Producto.h"


using namespace std;


typedef Producto* item;// porque como puntero? R: Para ahorrar memoria


const  item indefinido=NULL; //o crear un producto por defecto

class Pila{
 private:

	int tope;
	item *arreglo;//tiempo de ejecucion en composicion y agregacion, trabajar asi siempre
	int MAX;
	item* reservarMemoria(int tama);

 public:
	Pila(int dim = 10);

	void push(item item);
	item  top();
	void pop();
	bool esPilavacia();
	void escribir();
	~Pila();
};

#endif  //PILA_H_
