        Hash Tables
Objetivo: Usar una función hash para clasificar palabras en buckets.

🧪 Ejercicio 4.1 – Implementar tabla hash simple
Crea un array de 26 punteros a lista (una por cada letra del abecedario).

Escribí una función int hash(const char *word) que devuelva un índice entre 0 y 25.

🧪 Ejercicio 4.2 – Insertar y buscar en hash table
Insertá una palabra en su bucket correspondiente.

Buscá eficientemente por hash y luego por comparación.

🧪 Ejercicio 4.3 – Liberar tabla hash completa
Recorre todos los buckets y liberá sus listas.