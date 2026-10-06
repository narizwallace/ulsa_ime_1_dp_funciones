// Ejemplo 0: un programa sin funciones.
//
// Que observar: no existe codigo en modulos, si queremos saludar
// multiples veces el mismo codigo se tiene que repetir.
//
// Compilar: g++ -Wall -Wextra -std=c++17 src/ejemplo_0_sin_funciones.cpp -o ejemplo
// Ejecutar: ./ejemplo

#include <iostream>

// Imprime un saludo fijo.
int main() {
    std::cout << "Hola, mundo\n";
    std::cout << "Hola, mundo\n";
    std::cout << "Hola, mundo\n";
    std::cout << "Hola, mundo\n";
    std::cout << "Hola, mundo\n";
    return 0;
}
