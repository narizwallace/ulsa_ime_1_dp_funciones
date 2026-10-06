// Ejemplo 5: una funcion que devuelve un valor.
//
// Que observar: la funcion no imprime nada. Construye el saludo y
// lo entrega con return; main decide que hacer con el.
//
// Compilar: g++ -Wall -Wextra -std=c++17 src/ejemplo_5_con_return.cpp -o ejemplo
// Ejecutar: ./ejemplo

#include <iostream>
#include <string>

// Construye un saludo para la persona indicada.
// Recibe: el nombre de la persona.
// Devuelve: el texto del saludo.
std::string crearSaludo(std::string nombre) {
    std::string saludo = "Hola, " + nombre + "!!!";
    return saludo;
}

int main() {
    std::string saludo = crearSaludo("Ana");
    std::cout << saludo << "\n";
    return 0;
}
