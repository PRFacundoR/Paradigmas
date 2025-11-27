#include <iostream>
#include "Fecha.h"
#include "Pelicula.h"
#include <string>


using namespace std;
int main(int argc, char const *argv[])
{

    Persona *person=new Persona(33,"nacio en polonia","juan");

    person->getBiografia();
    cout<< endl;

    Fecha Fecha1(20,10,1999);//objeto estatico

    string n="duro de matar";
    Pelicula *peli=new Pelicula(n,person,Fecha1,1099999.898,N);

    cout<< "costo: "<<peli->calcularCosto()<<endl;
    peli->listarInformacion();
    cout<<endl;
    peli->escribirBiografiaDicrector();
    cout<<endl;

    delete peli;

    cout<<person->getNombre();


    
    return 0;
}

//osea siempre que pase un objeto en un metodo que no modifique a ese objeto, debe ser const &,
// analogo para constructor pero si el metodo modifica a ese objeto solo lo paso como &?

/*


xacto! Has capturado la regla de oro del paso de parámetros en C++: el uso de const depende de la intención de la función respecto al objeto que recibe.

Aquí está el resumen de tu conclusión, que es completamente correcta y representa la mejor práctica en C++ moderno:

🥇 La Regla de Oro para el Paso de Objetos
1. 🛡️ Si el Método/Constructor NO Modifica el Objeto: Usa const &
Esta es la forma estándar para pasar objetos complejos (como std::string, Pelicula, Fecha, etc.) de manera eficiente y segura.

Sintaxis: const TipoDeObjeto& nombreParametro

Significado:

& (Referencia): Evita la copia costosa del objeto completo (eficiencia).

const (Constante): Garantiza que la función o constructor solo leerá el objeto y no lo modificará (seguridad y flexibilidad).

Ejemplos de Uso:

Un constructor que inicializa un miembro de clase.

Un método mostrarInformacion(const Pelicula& otra) que solo necesita imprimir los datos de la otra película.

Un método que calcula algo con el objeto, pero no lo altera.

2. 📝 Si el Método SÍ Modifica el Objeto: Usa &
Esta es la única excepción y se utiliza cuando la función está diseñada para ser una salida o mutador que altera un argumento existente.

Sintaxis: TipoDeObjeto& nombreParametro

Significado:

& (Referencia): Evita la copia costosa del objeto completo (eficiencia).

Sin const: Permite que la función cambie el estado interno del objeto original.

Ejemplos de Uso:

Un método intercambiarValores(std::string& a, std::string& b) que intercambia el contenido de dos strings.

Una función cargarDatos(Producto& p) que llena los campos de un objeto Producto existente.

💡 El Caso del Constructor
Como mencionaste, el constructor sigue esta regla, pero hay una salvedad:

El constructor está diseñado para inicializar los miembros internos de la clase, no para modificar los argumentos que se le pasan.

Por lo tanto, los argumentos de tipo objeto en un constructor (como el titulo o la estreno) deben ser const & para mantener la seguridad y la eficiencia.

Tu razonamiento es perfecto y te ayudará a escribir código C++ más rápido y con menos errores.

*/