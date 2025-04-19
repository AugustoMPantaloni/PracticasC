# Plan de Estudio en C - Versión Estructurada

**Notas**:
- C es un lenguaje compilado, necesitarás un compilador como **GCC**.
- Para compilar los ejercicios usa el siguiente comando: gcc archivo.c -o ejecutable.
- C se enfoca en sistemas y consola, no tiene soporte para DOM ni características web.
- La gestión de memoria es manual (malloc/free).
- No existen objetos nativos en C, se simulan con structs y funciones.

*Etapa 1: Fundamentos*

1. Variables y Tipos de Datos
##  Ejercicios:
- A. Declara variables de tipo int, float, double, y char. Asigna valores a cada una e imprímelos usando printf() con el formato adecuado.
- B. Crea un programa que imprima el tamaño de cada tipo de dato creado en el ejercicio "A" (usa sizeof).
- C. Usa #define para crear constantes como PI = 3.1416 y G = 9.81. Luego calcula el área de un círculo y el peso de un objeto en caída libre con fórmulas usando esas constantes.

2. Operadores y Expresiones
##  Ejercicios: 
- A. Calculadora: el usuario ingresa dos números y un operador (+, -, *, /). Tu programa muestra el resultado usando switch.
- B. Escribe un programa que le pida un número al usuario y diga si es par o impar usando %.
- C. Dado un número entero, muestra su valor desplazado 2 bits a la izquierda y a la derecha. Luego aplica AND, OR y XOR con otro número fijo.

3. Estructuras de Control
##  Ejercicios:
- A. El usuario ingresa un número. Imprime si es positivo, negativo o cero.
- B. Imprime la tabla de multiplicar del 1 al 10 del número que elija el usuario.
- C. Implementa un menú que permita:
    * Sumar dos números
    * Calcular el factorial de un número
    * Salir
    * Usa switch y bucles para repetir el menú hasta que el usuario decida salir.

4. Funciones
##  Ejercicios:
- A. Crea una función potencia(int base, int exponente) que devuelva la base elevada al exponente.
- B. Escribe factorial(int n) de forma recursiva. Llama a la función desde main() y muestra el resultado.
- C. Escribe una función que reciba dos variables por referencia e intercambie sus valores. Prueba con diferentes tipos de datos.

*Etapa 2: Estructuras de Datos y Memoria*

5. Arrays y Strings
##  Ejercicios:
- A. Pide al usuario ingresar 10 números. Luego imprime el mayor y su posición en el array.
- B. Pide al usuario ingresar un string y luego imprime ese string al revés sin usar funciones de string.h.
- C. Escribe un programa que concatene dos strings ingresados por el usuario y los imprima juntos.

6. Structs
##  Ejercicios:
- A. Define una struct Punto2D con x e y. Escribe una función que calcule la distancia entre dos puntos.
- B. Define un struct Item con nombre, cantidad y precio. Crea un array para simular un inventario con al menos 3 productos, y muestra el total de valores      almacenados.
- C. Crea una pequeña "base de datos" de libros con structs: título, autor, año y código ISBN. Agrega funciones para agregar, buscar por título y listar todos.

7. Gestión de Memoria
##  Ejercicios:
- A. Pide al usuario el tamaño de un array. Usa malloc para crearlo dinámicamente, llena con números ingresados por teclado, y luego libera la memoria.
- B. Crea una matriz dinámica NxM con malloc y free. Llénala con valores aleatorios entre 1 y 100 y muéstrala en pantalla.
- C. Implementa una lista enlazada simple que permita agregar elementos al final, mostrar todos los nodos, y liberar la memoria usada.


8. Archivos (Files I/O)
Ejercicios:
- A. Pide al usuario un nombre de archivo origen y uno de destino. Copia el contenido byte a byte.
- B. Crea un sistema que permita al usuario registrar nombre y correo. Guarda cada usuario como una línea en un archivo.
- C. Crea una función que recorra un archivo de texto y busque si existe una palabra clave. Imprime las líneas donde aparece.

*Etapa 3: Conceptos Avanzados*

9. Punteros Avanzados
Ejercicios:
- A. Reimplementa strlen, strcpy y strcmp usando punteros en lugar de índices.
- B. Crea un programa que ordene un array de enteros usando el método burbuja, manipulando los valores con punteros.
- C. Implementa una calculadora donde cada operación (+, -, *, /) sea una función, y usa un array de punteros a funciones para llamarlas según el input del usuario..

10. Recursión
Ejercicios:
- A. Impleméntalo con impresión paso a paso de los movimientos para las Torres de Hanoi con 3 discos.
- B. Implementa la serie de Fibonacci de forma recursiva. Añade contadores para medir cuántas veces se llama a la función.
- C. Escribe una búsqueda binaria recursiva sobre un array ordenado de enteros. Muestra los pasos de la búsqueda.

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