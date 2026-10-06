// Ejemplo 2: una funcion con un parametro.
//
// Que observar: la misma funcion sirve para saludar a personas
// distintas. "nombre" es el parametro; "Ana" y "Luis" son los
// argumentos.
//
// Compilar: g++ -Wall -Wextra -std=c++17 src/ejemplo_2_con_parametro.cpp -o ejemplo
// Ejecutar: ./ejemplo

#include <iostream>
#include <string>

// Imprime un saludo para la persona indicada.
// Recibe: el nombre de la persona.
// Devuelve: nada.
void saludar(std::string nombre) {
    std::cout << "Hola, " << nombre << "\n";
}

int main() {
    saludar("Ana");
    saludar("Luis");
    return 0;
}
