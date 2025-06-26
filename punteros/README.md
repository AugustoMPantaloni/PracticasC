🧩 Nivel 1 – Fundamentos de punteros (lectura y escritura básica)
Objetivo: Saber declarar punteros, asignar direcciones y acceder a valores con * y &.
Conceptos clave:
¿Qué es un puntero?
Operadores * (desreferenciación) y & (dirección).
Relación entre variables y sus punteros.
Ejercicios:
1- Declarar una variable int, un puntero a esa variable, imprimir el valor de la variable, la dirección, y el valor apuntado.

2- Modificar el valor de una variable usando su puntero.

3- Intercambiar los valores de dos variables con una función void swap(int *a, int *b).
✅ Repetí esto hasta que no tengas que pensarlo

🔁 Nivel 2 – Punteros y funciones
Objetivo: Usar punteros para pasar variables por referencia a funciones.
Conceptos:
Paso por valor vs paso por referencia.
Modificación de variables fuera de la función usando punteros.
Ejercicios:                                                                                                                                       
4- Hacer una función void cuadrado(int *x) que eleve al cuadrado el número que apunta.

5- Función void invertir_signo(int *x) que cambie el signo de un número.

6- Función void maximo(int *a, int *b, int *resultado) que guarde el mayor de a y b en resultado.

📦 Nivel 3 – Punteros y arrays
Objetivo: Entender que un array es un puntero al primer elemento.
Conceptos:
Acceso a elementos con sintaxis de puntero: *(arr + i) y arr[i].
Diferencia entre arr y &arr[i].
Recorrido con punteros.
Ejercicios:
7- Crear un array de 5 enteros y recorrerlo usando punteros (*(arr + i)).

8- Función void imprimir_array(int *arr, int n) que recorra el array solo con punteros.

9- Sumar todos los elementos del array usando punteros.

🔄 Nivel 4 – Punteros a punteros
Objetivo: Empezar a entender el acceso doble (útil para strings y memoria dinámica más adelante).
Conceptos:
int *p es un puntero a int → int **pp es un puntero a puntero.
Aplicación con matrices y parámetros dobles.
Ejercicios:
10- Declarar un int x = 10, int *p = &x, int **pp = &p. Imprimir todo: x, *p, **pp, direcciones.

11- Función que reciba int **pp y cambie el valor original (**pp = 99).

12- Jugar con char *str = "Hola" y punteros a char (solo leer, no modificar).

🛠️ Nivel 5 – Strings y punteros (sin malloc)
Objetivo: Manejar cadenas como punteros (char *), entender cómo viajan los caracteres.
Conceptos:
char * como puntero al primer carácter de un string.
Recorrer strings con punteros.
No modificar literales (porque son constantes).
Ejercicios:
13- Función void imprimir_string(const char *s) que recorra el string y lo imprima letra por letra usando punteros.

14- Función int longitud(const char *s) que calcule la longitud sin strlen.

15- Función void copiar(const char *origen, char *destino) que copie string carácter por carácter.