// Ejemplo 3: modificar un parametro que llega por valor.
//
// Que observar: la funcion recibe una COPIA del nombre.
// Dentro de la funcion la copia cambia; la variable de main no.
//
// Antes de ejecutar: que imprime la linea "Despues"?
//
// Compilar: g++ -Wall -Wextra -std=c++17 src/ejemplo_3_por_valor.cpp -o ejemplo
// Ejecutar: ./ejemplo

#include <iostream>
#include <string>

// Agrega un apellido al nombre y lo imprime.
// Recibe: el nombre, por valor (una copia).
// Devuelve: nada.
void agregar(std::string nombre) {
    nombre = nombre + " Lopez";
    std::cout << "Dentro: " << nombre << "\n";
}

int main() {
    std::string nombre = "Ana";
    agregar(nombre);
    std::cout << "Despues: " << nombre << "\n";
    return 0;
}
