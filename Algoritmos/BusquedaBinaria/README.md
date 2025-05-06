# Plan de Estudio en C - Algoritmos

## Busqueda binaria:

1. Búsqueda Binaria Básica
- Objetivo: Implementa la búsqueda binaria en un array ordenado de enteros y devuelve la posición de un número en el array.
- Entrada: Un array de enteros ordenado de menor a mayor y un número a buscar.
- Salida: La posición (índice) del número buscado, o -1 si no se encuentra.
- Pistas: Usa un ciclo while y compara el valor en la mitad del array con el número buscado. Si el número es mayor, ajusta el rango de búsqueda a la mitad superior; si es menor, ajusta a la mitad inferior.

2. Búsqueda Binaria en un Array de Cadenas
- Objetivo: Implementa la búsqueda binaria en un array de cadenas de caracteres ordenadas alfabéticamente.
- Entrada: Un array de cadenas ordenadas y una cadena a buscar.
- Salida: El índice de la cadena buscada, o -1 si no se encuentra.
- Pistas: Utiliza la función strcmp() para comparar las cadenas y realizar la búsqueda binaria.

3. Contar las Ocurrencias de un Elemento
- Objetivo: Usa búsqueda binaria para encontrar el primer y último índice de un número en un array ordenado, y así contar cuántas veces aparece.
- Entrada: Un array de enteros ordenado y un número a buscar.
- Salida: La cantidad de veces que aparece el número en el array.
- Pistas: Realiza dos búsquedas binarias: una para encontrar el primer índice del número y otra para encontrar el último índice.

4. Búsqueda Binaria Recursiva
- Objetivo: Implementa la búsqueda binaria usando una función recursiva.
- Entrada: Un array ordenado de enteros y el número a buscar.
- Salida: El índice del número buscado, o -1 si no se encuentra.
- Pistas: La recursividad debe reducir el rango de búsqueda en cada llamada recursiva

5. Buscar el Número Más Cercano
- Objetivo: Dado un array de enteros ordenado, encuentra el número más cercano a un valor específico (si no está presente).
- Entrada: Un array de enteros ordenado y un número objetivo.
- Salida: El número más cercano al objetivo en el array.
- Pistas: Si el número no se encuentra, compara los valores a la izquierda y derecha del índice encontrado para determinar el más cercano.