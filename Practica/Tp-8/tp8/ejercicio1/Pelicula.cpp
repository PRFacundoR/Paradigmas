//============================================================================
// PARADIGMAS DE PROGRAMACION - 2025
// Pelicula.cpp
//============================================================================

#include "Pelicula.h"

int Pelicula::autonumerico = 0;

//Constructor por defecto
Pelicula::Pelicula(){
	this->codigo=0;
	this->titulo="";
	this->director=nullptr;
	this->estreno;
	this->precioBase=0.0;
	
}

//Constructor con parametros
Pelicula::Pelicula(string titulo, Persona*director, Fecha* estreno, float precio){
	this->codigo=++(this->autonumerico);
	this->titulo=titulo;
	this->director=director;
	this->estreno=estreno;
	this->precioBase=precio;

}

//Constructor copia
Pelicula::Pelicula(const Pelicula& P){
	this->codigo=P.codigo;
	this->titulo=P.titulo;
	this->director=P.director;
	this->estreno=P.estreno;
	this->precioBase=P.precioBase;

}

int Pelicula::getAutonumerico(){
	return Pelicula::autonumerico;
}

void Pelicula::setDirector(Persona *nombreDir){
	this->director = nombreDir;
}

void Pelicula::listarInformacion(){
	cout<<"Pelicula"<<"  (Direccion del Objeto: "<<this<<" )"<<endl;
	cout<<"  Codigo: "<<this->codigo<<endl;
	cout<<"  Titulo: "<<this->titulo<<endl;
	cout<<"  Director: "<<this->director->getNombre()<<endl;
	
	cout<<"  Estreno: "<<((esEstreno())?"SI":"NO")<<endl;
	cout<<"  Precio Base: "<<this->precioBase<<endl<<endl;
}


void Pelicula::escribirBiografiaDicrector()
{
	cout<< "El nombre del director es: "<<director->getNombre();
	cout<<"La edad del director es: "<< director->getEdad();
	cout<< "Bibliografia: "<< director->getBiografia();
}

bool Pelicula::esEstreno()
{
	if (estreno->getAnio()==2025)
	{
		return true;
	}else
	{
		return false;
	}
	
	
    
}



//Destructor
Pelicula::~Pelicula(){
	cout<<"Se destruye la pelicula codigo:"<<this->codigo;
	cout<<"  (Direccion del Objeto destruido: "<<this<<" )"<<endl<<endl;
	this->codigo=0;
	this->titulo="";
	this->precioBase=0.0;
	
	/*delete estreno;
	delete director;*/
}

//cuando se retornaba una referencia?siempre me olvido