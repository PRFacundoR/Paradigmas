//============================================================================
// PARADIGMAS DE PROGRAMACION - 2025
// Pelicula.h
//============================================================================

#ifndef PELICULA_H_
#define PELICULA_H_

#include <iostream>
#include <string.h>
#include "Persona.h"
#include "Fecha.h"

using namespace std;


enum produccion {N, I};

class Pelicula {

	static int autonumerico;
	int codigo;
	string titulo;
	Persona* director;
	Fecha estreno;//lo paso como puntero?
	float precioBase;
	enum produccion tipoPelicula;

public:
	//Constructor por defecto
	Pelicula();
	//Constructor con parametros
	Pelicula(string&, Persona*, Fecha&, float, enum produccion);
	//Constructor copia
	Pelicula(const Pelicula&);

	static int getAutonumerico();
	void setDirector(Persona *nombreDir);
	void listarInformacion();
	float calcularCosto();

	void escribirBiografiaDicrector();
	bool esEstreno();

	//Destructor
	~Pelicula();

};

#endif /* PELICULA_H_ */
