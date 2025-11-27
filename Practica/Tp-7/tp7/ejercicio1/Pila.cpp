/*
 * Pila.cpp
 */
#include <iostream>
#include "Pila.h"




using namespace std;

item* Pila:: reservarMemoria(int dim){
	item *reserva = new item[dim];
	if(reserva==NULL){
		cout<<"Problema: no se pudo realizar la reserva"; 
	}
	return reserva;
}


Pila::Pila(int dim){
	MAX = dim >0 ? dim : 10;
	tope=-1;
	arreglo = reservarMemoria(MAX);
}



void Pila ::push(item item){// si es composicion, lo crea la pila, paso los parametros para que la pila cree los productos
	if(tope+1 <MAX){
		tope++;
		arreglo[tope] = item;
	}
}

void Pila:: pop(){
	if(tope>=0){
		tope--; //asi borro en agregacion
	}
}
//cambio
item Pila:: top(){
	if(!esPilavacia())
		return arreglo[tope];
	else
		return indefinido;
}

bool Pila:: esPilavacia(){
	return tope==-1;
}

void Pila::escribir(){
	cout << endl<<" PILA De Productos: (implementacion Pila de Productos)" << endl;
	for(int i=tope; i>=0;i-- ){
		arreglo[i]->listarInformacion();
	}
}

Pila::~Pila(){
	/*for (int i = 0; i < 10; i++)
	{
		 arreglo[i]->~Producto();
	}*/ // composicion
	
	tope = -1;
	MAX = 0;
	delete [] arreglo;
}


