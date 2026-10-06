// Ejemplo 1: una funcion sin parametros.
//
// Que observar: la funcion se define una vez y se ejecuta
// cada vez que se llama. Definirla no la ejecuta.
//
// Compilar: g++ -Wall -Wextra -std=c++17 src/ejemplo_1_sin_parametros.cpp -o ejemplo
// Ejecutar: ./ejemplo

#include <iostream>

// Imprime un saludo fijo.
// No recibe nada y no devuelve nada (void).
void saludar() {
    std::cout << "Hola, mundo =)\n";
}

int main() {
    saludar();
    saludar();
    saludar();
    saludar();
    saludar();
    return 0;
}
