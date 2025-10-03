#include <istream>
#include <iostream>
using namespace std;

typedef int item;
#define indefinido -99999

class Vector
{
    private:
    item *elemento;
    int max;

    public:
    Vector(unsigned int n = 10);
    Vector(const Vector &V);
    ~Vector();



    unsigned int capacidad();
    bool reservarMemoria(unsigned int n);
    bool redimensionar(unsigned int n);
    void insertar(unsigned int p, item x);
    void borrar(unsigned int p);
    void borrar();
    item& element( unsigned int p);
    bool operator==(Vector V2);
    ostream& operator<<(ostream& salida);
    istream& operator>>(istream& entrada);
};

