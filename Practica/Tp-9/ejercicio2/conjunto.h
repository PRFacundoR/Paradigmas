#ifndef CONJUNTO_H_
#define CONJUNTO_H_

#include <iostream>
using namespace std;
typedef int item;

template<class T>
class IteradorDeConjunto;

template<class T>
class Conjunto{
	static const int MAX = 10;
	static T *indefinido;
	int indice;
	T elementos[MAX];

 public:
	Conjunto();
	void agregar(T X);
	int cantidad();
	bool esConjuntoVacio();
	void escribir();

    friend class IteradorDeConjunto<T>;

};

template<class T>
T *Conjunto<T>::indefinido = new T;

template<class T>
Conjunto<T>::Conjunto(){
	this->indice=0;
}
template<class T>
void Conjunto<T>::agregar(T X){
	// Por definicion, el conjunto no contiene elementos repetidos.
	// Esta operacion realiza el control antes de agregar un nuevo elemento.

	if(this->indice<MAX){
		int i=0;
		while(i<this->indice &&  !(this->elementos[i] == X))
			i++;

		if(i == this->indice){
			this->elementos[this->indice] = X;
			this->indice++;
		}
	}
}
template<class T>
int Conjunto<T>::cantidad(){
	return this->indice;
}
template<class T>
bool Conjunto<T>::esConjuntoVacio(){
	return this->indice==0;
}
template<class T>
void Conjunto<T>::escribir(){
	cout<<"Conjunto: { ";
	for(int i=0; i<this->indice; i++ )
		cout<<this->elementos[i]<<" ";
	cout<<"}"<<endl<<endl;
}

#endif