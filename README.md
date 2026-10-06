# Funciones: paso por valor y por referencia

Ejemplos de la clase de funciones de Diseño de Programas. Cada archivo es un programa completo y cambia una sola cosa respecto al anterior.

## Ejemplos

| Archivo | Tema | Qué observar |
| --- | --- | --- |
| `src/ejemplo_1_sin_parametros.cpp` | Función sin parámetros | Cómo se define y cómo se llama una función |
| `src/ejemplo_2_con_parametro.cpp` | Función con un parámetro | La misma función sirve para datos distintos |
| `src/ejemplo_3_por_valor.cpp` | Paso por valor | La función cambia su copia; el original no cambia |
| `src/ejemplo_4_por_referencia.cpp` | Paso por referencia | Con `&`, la función cambia el original |
| `src/ejemplo_5_con_return.cpp` | Función que devuelve un valor | La función entrega un resultado en lugar de imprimirlo |

## Cómo compilar y ejecutar

Desde la carpeta del proyecto, cambia el nombre del archivo por el ejemplo que quieras probar:

```
g++ -Wall -Wextra -std=c++17 src/ejemplo_1_sin_parametros.cpp -o ejemplo
./ejemplo
```

En Windows, ejecuta con `.\ejemplo.exe`.

## Cómo estudiar los ejemplos

1. Lee el código y escribe qué crees que va a imprimir.
2. Compila y ejecuta.
3. Compara la salida con tu predicción. Si no coincide, explica por qué.

Los ejemplos 3 y 4 son iguales salvo por un `&`. Ejecuta los dos y compara la línea "Despues".
