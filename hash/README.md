        Hash Tables
Objetivo: Usar una función hash para clasificar palabras en buckets.

Ejercicio A – Implementar tabla hash simple
- Crea un arreglo (array) de 26 punteros a listas enlazadas.
- Cada puntero representará una "cubeta" o "bucket" para almacenar elementos cuyo índice va de 0 a 25.

- Escribí una función
        int hash(const int *number);
que reciba un puntero a un número entero y devuelva un índice válido entre 0 y 25.

La función hash será responsable de asignar a cada número un índice dentro del rango del array, para que puedas almacenar ese número en la lista correspondiente.

🧪 Ejercicio B – Insertar y buscar en hash table
Insertá una palabra en su bucket correspondiente.

Buscá eficientemente por hash y luego por comparación.

🧪 Ejercicio C – Liberar tabla hash completa
Recorre todos los buckets y liberá sus listas.