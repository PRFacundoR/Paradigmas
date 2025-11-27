#include <iostream>

void mostrarAcceso(int** arregloDoble, int filas, int columnas) {
    // 1. Acceso al Nivel 0: 'arregloDoble'
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "NIVEL 0: El Puntero Doble (arregloDoble)" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "Contenido de 'arregloDoble': " << arregloDoble 
              << " \t| Mensaje: Dirección de memoria del primer puntero (la base del arreglo)." << std::endl;
    
    std::cout << "\n";
    
    // 2. Acceso al Nivel 1: '*arregloDoble' o 'arregloDoble[i]'
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "NIVEL 1: Puntero Simple (*arregloDoble o arregloDoble[i])" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    
    // Bucle para mostrar la dirección a la que apunta cada puntero en el arreglo principal
    for (int i = 0; i < filas; ++i) {
        // arregloDoble[i] es la forma más limpia de acceder al i-ésimo puntero
        int* punteroSimple = arregloDoble[i];
        
        std::cout << "Contenido de 'arregloDoble[" << i << "]' (" << punteroSimple << ")" 
                  << " \t| Mensaje: Dirección de memoria del " << i + 1 << "º arreglo de enteros (la fila)." << std::endl;
        
        // *arregloDoble (sin índice) solo muestra la dirección del primer arreglo:
        if (i == 0) {
             std::cout << "Contenido de '*arregloDoble':      " << *arregloDoble 
                       << " \t| Mensaje: Es lo mismo que arregloDoble[0]." << std::endl;
        }
    }
    
    std::cout << "\n";
    
    // 3. Acceso al Nivel 2: '**arregloDoble' o 'arregloDoble[i][j]'
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "NIVEL 2: El Valor Final (**arregloDoble o arregloDoble[i][j])" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    
    // Muestra el valor final para cada elemento
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            
            // Accede al valor entero usando la doble desreferenciación (arregloDoble[i][j])
            int valor = arregloDoble[i][j];
            
            std::cout << "Valor en 'arregloDoble[" << i << "][" << j << "]': " << valor;
            
            // **arregloDoble (sin índice) solo muestra el valor del primer elemento
            if (i == 0 && j == 0) {
                std::cout << " \t| Mensaje: Es lo mismo que **arregloDoble o arregloDoble[0][0]." << std::endl;
                std::cout << "Valor de '**arregloDoble':           " << **arregloDoble << std::endl;
            } else {
                std::cout << std::endl;
            }
        }
    }
}

// --------------------------------------------------------

int main() {
    /*const int FILAS = 2;
    const int COLUMNAS = 3;
    
    // 1. Crear el arreglo de punteros (Nivel 0)
    int** arregloDoble = new int*[FILAS];
    
    // 2. Crear los arreglos de datos (Nivel 1) e inicializarlos
    for (int i = 0; i < FILAS; ++i) {
        arregloDoble[i] = new int[COLUMNAS];
        // Inicializar con valores: (fila * 10) + columna
        for (int j = 0; j < COLUMNAS; ++j) {
            arregloDoble[i][j] = (i * 10) + j; 
        }
    }
    
    // Llamar a la función para ver los accesos
    mostrarAcceso(arregloDoble, FILAS, COLUMNAS);
    
    // 3. Liberar la memoria (¡Esencial!)
    for (int i = 0; i < FILAS; ++i) {
        delete[] arregloDoble[i];
    }
    delete[] arregloDoble;*/


    int**arreglo=new int*[2];

    arreglo[0] = new int[1]; 
    // Fila 1: Reservamos memoria para 1 columna (un solo int)
    arreglo[1] = new int[1]; 

    // 3. ASIGNACIÓN DE VALORES
    
    // Asignamos el valor 11 a la posición [0][0]
    arreglo[0][0] = 11; 
    
    // Asignamos el valor 12 a la posición [1][0]
    arreglo[1][0] = 12;



    
    std::cout<<"dir de arreglo"<< arreglo<< std::endl;
    for (int i = 0; i < 2; i++)
    {
        std::cout<<"dir de *arreglo"<< arreglo[i]<< std::endl;
    }
std::cout<< std::endl;
    for (int i = 0; i < 2; i++)
    {
        std::cout<<"obj de **arreglo"<< *arreglo[i]<< std::endl;
    }
    




    
    return 0;
}