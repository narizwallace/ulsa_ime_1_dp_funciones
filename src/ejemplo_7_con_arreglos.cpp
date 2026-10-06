#include <iostream>
#include <string>

using namespace std;

void saludarArreglo(string nombres[], bool ingles) {
  for (int i = 0; i < 3; i++) {
    if (ingles) {
      nombres[i] = "Hi, " + nombres[i];
    } else {
      nombres[i] = "Hola, " + nombres[i] + " =)";
    }
  }
}

int main() {
  string nombres[3] = {"Mario", "Bety", "Pepe"};
  saludarArreglo(nombres, false);
  saludarArreglo(nombres, true);
  for (int i = 0; i < 3; i++) {
    cout << nombres[i] << "\n";
  }

  return 0;
}