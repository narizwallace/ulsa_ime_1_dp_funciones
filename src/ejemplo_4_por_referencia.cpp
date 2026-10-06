// Ejemplo 4: modificar un parametro que llega por referencia.
//
// Que observar: la unica diferencia con el ejemplo 3 es el & del
// parametro. Ahora la funcion trabaja sobre la variable ORIGINAL
// de main, asi que el cambio se conserva.
//
// Antes de ejecutar: que imprime la linea "Despues"?
//
// Compilar: g++ -Wall -Wextra -std=c++17 src/ejemplo_4_por_referencia.cpp -o ejemplo
// Ejecutar: ./ejemplo

#include <iostream>
#include <string>

// Agrega un apellido al nombre y lo imprime.
// Recibe: el nombre, por referencia (el original).
// Devuelve: nada. Modifica la variable que recibio.
void agregarPorReferencia(std::string& nombre) {
    nombre = nombre + " Lopez";
    std::cout << "Dentro: " << nombre << "\n";
}

int main() {
    std::string nombre = "Ana";
    agregarPorReferencia(nombre);
    std::cout << "Despues: " << nombre << "\n";
    return 0;
}
