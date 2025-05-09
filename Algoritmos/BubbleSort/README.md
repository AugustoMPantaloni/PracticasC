# Plan de Estudio en C - Algoritmos

## Bubble sort:

1.  Ordenar un Array con Bubble Sort
- Objetivo: Implementa el algoritmo de Bubble Sort para ordenar un array de enteros en orden ascendente.
- Entrada: Un array de enteros desordenados.
- Salida: El array ordenado de menor a mayor.
- Pistas: Usa dos ciclos for, uno para recorrer el array y otro para comparar y hacer el intercambio de los elementos. Recuerda que cada pasada coloca el número más grande en su posición final.

2.  Contar el Número de Intercambios en Bubble Sort
- Objetivo: Modifica el algoritmo de Bubble Sort para contar cuántos intercambios se realizaron durante la ordenación.
- Entrada: Un array de enteros desordenados.
- Salida: El array ordenado y el número total de intercambios realizados.
- Pistas: Simplemente añade una variable que se incremente cada vez que se haga un intercambio de elementos en el algoritmo.

3.  Optimización de Bubble Sort
-. Objetivo: Optimiza el algoritmo de Bubble Sort para que deje de hacer comparaciones si el array ya está ordenado. 
- Entrada: Un array de enteros.
- Salida: El array ordenado y el número de comparaciones realizadas.
- Pistas: Puedes añadir una bandera (flag) que se establece en false cuando no se realiza ningún intercambio en una pasada. Si no se realiza ningún intercambio en una pasada completa, el algoritmo debe detenerse.

4. Ordenar un Array de Cadenas con Bubble Sort
- Objetivo: Implementa el algoritmo de Bubble Sort para ordenar un array de cadenas (strings) alfabéticamente.
- Entrada: Un array de cadenas de texto.
- Salida: El array de cadenas ordenado alfabéticamente.
. Pistas: Utiliza la función strcmp de la biblioteca <string.h> para comparar las cadenas.

5.  Ordenar un Array de Números Decimales con Bubble Sort
- Objetivo: Ordenar un array de números decimales (tipo float) utilizando Bubble Sort.
- Entrada: Un array de números decimales desordenados.
- Salida: El array ordenado de menor a mayor.
- Pistas: Puedes aplicar el mismo algoritmo que en los ejercicios anteriores, pero con números de tipo float.