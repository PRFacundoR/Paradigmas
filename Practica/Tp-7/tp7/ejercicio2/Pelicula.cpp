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
	this->tipoPelicula=N;
}

//Constructor con parametros
Pelicula::Pelicula(string &titulo, Persona*director, Fecha &estreno, float precio, enum produccion tipo){
	this->codigo=++(this->autonumerico);
	this->titulo=titulo;
	this->director=director;
	this->estreno=estreno;
	this->precioBase=precio;
	this->tipoPelicula=tipo;
}

//Constructor copia
Pelicula::Pelicula(const Pelicula& P){
	this->codigo=P.codigo;
	this->titulo=P.titulo;
	this->director=P.director;
	this->estreno=P.estreno;
	this->precioBase=P.precioBase;
	this->tipoPelicula=P.tipoPelicula;
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
	cout<<"  Produccion: "<<((this->tipoPelicula==N)?"Nacional":"Internacional")<<endl;
	cout<<"  Estreno: "<<((esEstreno())?"SI":"NO")<<endl;
	cout<<"  Precio Base: "<<this->precioBase<<endl<<endl;
}

float Pelicula::calcularCosto(){//corregir?
	float costo = this->precioBase;
	if(this->tipoPelicula == I)
		costo = costo*1.3;
	else
		if(esEstreno())
			costo = costo*0.8;
	return costo;
}

void Pelicula::escribirBiografiaDicrector()
{
	cout<< "El nombre del director es: "<<director->getNombre();
	cout<<"La edad del director es: "<< director->getEdad();
	cout<< "Bibliografia: "<< director->getBiografia();
}

bool Pelicula::esEstreno()
{
	if (estreno.getAnio()==2025)
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
	this->tipoPelicula=N;
	
	/*delete estreno;
	delete director;*/
}

//cuando se retornaba una referencia?siempre me olvido

/*¡Perfecto! Vamos a desmenuzarlo bien, porque retornar referencias en C++ es un tema que muchos confunden al principio.

1️⃣ Qué significa retornar una referencia (&)

Cuando una función retorna algo como:

int& miFuncion();


Significa que no devuelve un valor copiado, sino una referencia al objeto original.
O sea:

Lo que recibís apunta al mismo objeto en memoria.

Si modificás la referencia, modificás directamente el objeto original.

Ejemplo:

int x = 10;

int& retornarX() {
    return x; // retorna referencia a x
}

int main() {
    int& ref = retornarX();
    ref = 20; // cambia x directamente
    cout << x; // imprime 20
}

2️⃣ Por qué y cuándo usar referencias en el retorno
🔹 Razones principales

Evitar copias grandes
Si tu objeto es pesado (por ejemplo un std::vector, std::string grande o una estructura compleja), devolver por valor copia todo el objeto.
Retornar por referencia evita esa copia:

std::vector<int>& obtenerVector() { return miVectorGrande; }


Permitir modificar el objeto original
Si la función devuelve una referencia, podés cambiar el objeto original directamente:

retornarX() = 100; // cambia x directamente


Encadenar asignaciones
Por ejemplo, en clases que implementan operadores [] o =:

clase[0] = 5; // gracias a que operator[] retorna referencia

🔹 Precauciones

⚠️ No devolvas referencias a objetos locales:

int& mal() {
    int x = 10;
    return x; // ❌ x se destruye al salir de la función
}


Esto produce comportamiento indefinido, porque el objeto ya no existe al salir de la función.

✅ Siempre retorna referencia a algo que vive fuera de la función:

Variables globales

Miembros de la clase (this->miMiembro)

Objetos que se pasan por referencia a la función

3️⃣ Ejemplo típico con clase
class Pila {
private:
    int datos[10];
    int tope = 0;

public:
    int& peek() { // retorna referencia al elemento en el tope
        return datos[tope - 1];
    }

    void push(int val) { datos[tope++] = val; }
};

int main() {
    Pila p;
    p.push(5);
    p.push(10);

    p.peek() = 100; // modifica directamente el elemento en el tope
}


Aquí peek() retorna una referencia al último elemento, por eso podemos modificarlo directamente.

✅ Resumen rápido
Tipo de retorno	Qué pasa	Cuándo usar
Valor normal (int)	Copia el objeto	Objetos pequeños, no necesitamos modificar el original
Referencia (int&)	Apunta al objeto original	Evitar copias grandes, permitir modificar el objeto, encadenar asignaciones
Referencia constante (const int&)	Apunta al objeto original, no se puede modificar	Evitar copias grandes sin permitir modificaciones

Si querés, puedo hacer un mini ejemplo práctico con Pila mostrando cuándo conviene retornar por valor, por referencia, y por referencia const, para que veas las diferencias en la práctica.

¿Querés que haga eso?*/