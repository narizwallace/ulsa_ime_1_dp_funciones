#include <iostream>
#include <string>

void saludar(std::string nombre, bool ingles) {
  if (ingles) {
    std::cout << "Hi, " << nombre;
  } else {
    std::cout << "Hola, " << nombre;
  }
}

int main() {
  saludar("Mario", true);
  saludar("Bety", true);
  saludar("Pepe", true);
  return 0;
}