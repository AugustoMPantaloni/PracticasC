# Plan de Estudio en C - Versión Estructurada

**Notas**:
- C es un lenguaje compilado, necesitarás un compilador como **GCC**.
- Para compilar los ejercicios usa el siguiente comando: gcc archivo.c -o ejecutable

- C se enfoca en sistemas y consola, no tiene soporte para DOM ni características web.
- La gestión de memoria es manual (malloc/free).
- No existen objetos nativos en C, se simulan con structs y funciones.

##  Etapa 1: Fundamentos
1. Variables y Tipos de Datos
Objetivo: Dominar los tipos básicos y declaraciones.
*Teoría:*
    Tipos primitivos: int, float, double, char.
    Modificadores: short, long, signed, unsigned.
    Alcance de las variables (scope).
    Constantes con #define y const.

*Ejercicios:*
    A. Declarar variables de diferentes tipos.
    B. Calcular el tamaño de los tipos con sizeof().
    C. Crear constantes para PI y gravedad.

2. Operadores y Expresiones
*Teoría:*
    Aritméticos: +, -, *, /, %, ++, --.
    Relacionales: ==, !=, >, <, >=, <=.
    Lógicos: &&, ||, !.
    Bit a bit: &, |, ^, ~, <<, >>.

*Ejercicios:*
    A. Crear una calculadora básica.
    B. Determinar si un número es par o impar utilizando el operador %.
    C. Realizar operaciones con bits.

3. Estructuras de Control
*Teoría:*
Condicionales: if/else, switch.
Bucles: for, while, do-while.
Control de flujo: break, continue, goto (evitar).

*Ejercicios:*
A. Clasificar números (positivo/negativo/cero).
B. Imprimir la tabla de multiplicar.
C. Crear un menú con switch (ejemplo: calculadora).

4. Funciones
*Teoría:*
Declaración y prototipos.
Paso por valor vs. paso por referencia.
Recursividad.

*Ejercicios:*
A. Crear una función que calcule la potencia de un número.
B. Implementar una función recursiva para el cálculo del factorial.
C. Crear una función que intercambie valores (paso por referencia).

##  Etapa 2: Estructuras de Datos y Memoria
5. Arrays y Strings
*Teoría:*
Arrays unidimensionales y multidimensionales.
Strings como arrays de char.
Funciones de la biblioteca string.h.

*Ejercicios:*
A. Buscar el valor máximo en un array.
B. Invertir un string.
C. Concatenar dos arrays.

6. Estructuras (Structs)
*Teoría:*
Uso de struct para agrupar datos.
typedef para crear tipos.
Uniones y enumeraciones.

*Ejercicios:*
A. Crear una struct para representar un punto 2D.
B. Crear un sistema de inventario utilizando structs.
C. Implementar una biblioteca para la gestión de libros.

7. Gestión de Memoria
*Teoría:*
Pila vs. Heap.
Funciones: malloc, calloc, realloc, free.
Arreglos dinámicos.

*Ejercicios:*
A. Crear un array dinámico.
B. Crear una matriz dinámica.
C. Implementar una lista enlazada simple.

8. Archivos (Files I/O)
*Teoría:*
Funciones: fopen, fclose.
Modos de apertura: "r", "w", "a".
Funciones: fread, fwrite, fprintf, fscanf.

*Ejercicios:*
A. Copiar un archivo.
B. Crear un registro de usuarios en un archivo.
C. Buscar texto en un archivo.

##  Etapa 3: Conceptos Avanzados
9. Punteros Avanzados
*Teoría:*
Aritmética de punteros.
Punteros a funciones.
Relación punteros vs. arrays.

*Ejercicios:*
A. Implementar funciones de string.h usando punteros.
B. Ordenar un array utilizando punteros.
C. Crear una calculadora con punteros a funciones.

10. Recursión
*Teoría:*
Caso base vs. caso recursivo.
Recursión vs. iteración.

*Ejercicios:*
A. Resolver las Torres de Hanoi.
B. Implementar la serie de Fibonacci de manera recursiva.
C. Realizar una búsqueda binaria recursiva.

##  Proyectos en C
1. Sistema de Gestión
Descripción: Un sistema de inventario o gestión de empleados que:
Guarde datos en archivos.
Permita realizar operaciones CRUD (Crear, Leer, Actualizar, Borrar).
Utilice structs y memoria dinámica.

2. Juegos de Consola
Descripción: Implementar juegos clásicos en consola:
- Tres en raya (Tic-tac-toe).
- Ahorcado.
- Snake (usando la librería ncurses).

3. Herramientas de Sistema
Descripción: Desarrollar herramientas útiles para el sistema:
- Mini shell básico.
- Analizador de archivos (contar líneas y palabras).
- Copiador de directorios.

4. Algoritmos Clásicos
Descripción: Implementar algoritmos clásicos de programación:
- Algoritmos de ordenación (Burbuja, Inserción, etc.).
- Estructuras de datos (listas, árboles).
- Resolver problemas clásicos como las N-reinas.

*Recursos Recomendados*
- Compilador: GCC (Linux) o MinGW (Windows).
- IDE: VS Code, CLion, o Code::Blocks.
- Libro: "El Lenguaje de Programación C" por Brian W. Kernighan y Dennis M. Ritchie (K&R).
- Práctica: Realiza proyectos pequeños utilizando Makefiles.