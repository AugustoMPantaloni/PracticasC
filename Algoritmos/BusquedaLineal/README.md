# Plan de Estudio en C - Algoritmos

## Busqueda lineal:
1. Buscar un número en un array estático
- Objetivo: Crear un programa que reciba un número y busque si está presente en un array de números fijos. Si lo encuentra, imprime su índice; si no, imprime un mensaje de "no encontrado".
- Pistas:
Usa el array: {3, 7, 12, 5, 8}
- El número que buscas debe ser ingresado por el usuario.

2. Buscar el índice de un número en un array de longitud variable
- Objetivo: Modificar el programa anterior para que el tamaño del array lo ingrese el usuario y luego le permita ingresar los elementos del array. Después, busque el número que el usuario ingrese.
- Pistas:
Usa scanf para recibir el tamaño del array.
Usa malloc o un array de tamaño dinámico para almacenar los números.
- Realiza una búsqueda lineal para encontrar el índice.

3. Buscar el primer y último índice de un número en el array
- Objetivo: Dado un array de números con posibles duplicados, deberás buscar el primer y el último índice de un número en el array.
- Pistas:
Si el número se encuentra varias veces, muestra el primer índice donde aparece y el último.

4. Buscar una palabra en una lista de strings (simulada con arrays de strings)
- Objetivo: Ingresar una palabra y verificar si está en una lista de palabras.
- Pistas:
Usa este array: {"gato", "perro", "conejo", "pez"}
Necesitarás arrays de tipo char[] y funciones como strcmp.

5. Encontrar el índice del primer número par
- Objetivo: Recorrer el array y encontrar el índice del primer número par.
- Pistas:
Usa el array: {5, 7, 9, 6, 3, 2}
Recordá que un número par cumple: num % 2 == 0
la condicion de si es par o no debe pasarse como el parametro objetivo no hacerse dentro de la misma funcion lineal.

6. Verificar si hay un número negativo en el array
- Objetivo: Determinar si el array contiene al menos un número negativo.
- Pistas:
Usa el array: {10, 4, -3, 8, 0}
Solo necesitás encontrar uno, podés cortar la búsqueda apenas lo encuentres.
la condicion de si es negativo o no debe pasarse como el parametro objetivo no hacerse dentro de la misma funcion lineal.