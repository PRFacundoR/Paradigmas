//============================================================================
// PARADIGMAS DE PROGRAMACION - 2025
// Pelicula.h
//============================================================================

#ifndef PELICULA_H_
#define PELICULA_H_

#include <iostream>
#include <string>
#include "Persona.h"
#include "Fecha.h"

using namespace std;




class Pelicula {

	static int autonumerico;
	int codigo;
	string titulo;
	Persona* director;
	Fecha *estreno;//lo paso como puntero?
	protected:
	float precioBase;
	

public:
	//Constructor por defecto
	Pelicula();
	//Constructor con parametros
	Pelicula(string, Persona*, Fecha*, float);
	//Constructor copia
	Pelicula(const Pelicula&);

	static int getAutonumerico();
	void setDirector(Persona *nombreDir);
	void listarInformacion();
	virtual float calcularCosto()=0;

	void escribirBiografiaDicrector();
	bool esEstreno();



	//Destructor
	virtual ~Pelicula();

};

#endif /* PELICULA_H_ */
