#include <iostream>
#include <string>
using namespace std;

enum Tipo
{
    N,
    I
};

class Pelicula
{
private:
    static int autonumerico;
    int codigo;
    string director;
    bool estreno;
    float precioBase;
    Tipo tipoPelicula;

public:
    Pelicula();
    Pelicula(
        
        bool estreno,
        float precioBase,
        Tipo tipoPelicula);
    Pelicula(const Pelicula &p);
    ~Pelicula();

    static int getAutonumerico();
    void setDirector(string nombre);
    void listarInformacion() const;
    float calcularCosto() const;
};
