Ejercicios Nivel 2 – Bucles Anidados

Estos ejercicios están enfocados en desarrollar lógica usando bucles anidados. A partir de este punto, cada ejercicio requerirá al menos un bucle dentro de otro para resolver patrones, estructuras, o coordenadas repetitivas.

/* Un truco para estos ejercicios es imaginarse una matriz como esta (de las filas y columnas que indique el ejercicio) e ir representando que pasa en cada iteracion.

    + + + + + + +
    + 1 1 1 1 1 + 
    + 2 2 2 2 2 +
    + 3 3 3 3 3 +
    + 4 4 4 4 4 +
    + 5 5 5 5 5 +
    + + + + + + +

*/


##  1. Rectángulo de asteriscos (3x4)
Mostrá un rectángulo de 3 filas por 4 columnas usando asteriscos *. Un * por celda, y cada fila en una línea distinta.
Ejemplo:
    ****
    ****
    ****

---


##  2. Mostrar número de fila repetido
Mostrá 4 filas, donde cada una repita el número de la fila.
Cada fila debe tener 5 repeticiones del número.
Ejemplo:
    1 1 1 1 1  
    2 2 2 2 2  
    3 3 3 3 3  
    4 4 4 4 4

---

##  3. Contar en columnas
Mostrá 4 filas donde los números vayan del 1 al 5 en cada una.
Ejemplo:
    1 2 3 4 5  
    1 2 3 4 5  
    1 2 3 4 5  
    1 2 3 4 5

---

##  4. Sumar en cada fila
Mostrá 4 filas, donde cada fila tenga el número de la fila repetido tantas veces como su valor.
Ejemplo:
    1 1 1
    2 2 2 2
    3 3 3 3 3
    4 4 4 4 4 4

---

##  5. Pirámide de números   
Mostrar 4 filas donde cada fila i comience en 1 y termine en el número de la fila actual, formando una pirámide de números.
Ejemplo:
    1  
    1 2  
    1 2 3  
    1 2 3 4  

---

**Problemas de "formación de series o matrices**

##  6.Tablero de ajedrez numérico
Mostrar un tablero de 4 filas × 5 columnas donde:
- Las casillas pares (fila + columna = par) muestren el número de la fila.
- Las casillas impares (fila + columna = impar) muestren un guión -.
Ejemplo:
    1 - 1 - 1  
    - 2 - 2 -  
    3 - 3 - 3  
    - 4 - 4 -  

---

##  Ejercicio 7: Tablero de dameros alternados
Mostrar un tablero de 5 filas × 5 columnas donde:
- Las casillas pares (fila + columna = par) muestren el número de la columna. 
- Las casillas impares (fila + columna = impar) muestren un asterisco *.
Ejemplo:
    1 * 3 * 5  
    * 2 * 4 *  
    1 * 3 * 5  
    * 2 * 4 *  
    1 * 3 * 5 


##  Ejercicio 8: Tablero de multiplicacion
Tablero de multiplicaciones:
- Casillas pares: producto fila × columna.
- Casillas impares: un guión -.
Ejemplo:
    1 - 3 - 5  
    - 4 - 8 -  
    3 - 9 - 15  
    - 8 - 16 -  
    5 - 15 - 25  


**Problemas de patrones diagonales**

##  Ejercicio 9: Diagonal principal
Mostrar una matriz de 5x5 donde:
- La diagonal principal (donde fila == columna) muestre 1.
- El resto de las casillas muestren 0.
Ejemplo:
    1 0 0 0 0  
    0 1 0 0 0  
    0 0 1 0 0  
    0 0 0 1 0  
    0 0 0 0 1  

---

##  Ejercicio 10: Diagonal secundaria
Mostrar una matriz de 5x5 donde:
- La diagonal secundaria (donde fila + columna = 6) muestre 1.
- El resto de las casillas muestren 0.
Ejemplo:
    0 0 0 0 1  
    0 0 0 1 0  
    0 0 1 0 0  
    0 1 0 0 0  
    1 0 0 0 0  

---

##  Ejercicio 11: Diagonal cruzada
Mostrar una matriz de 5x5 donde:
- La diagonal principal y secundaria muestran 1.
- El resto de las casillas muestren 0.
Ejemplo:
    1 0 0 0 1  
    0 1 0 1 0  
    0 0 1 0 0  
    0 1 0 1 0  
    1 0 0 0 1  

--- **¿Subimos la dificultad?**

##  Ejercicio 12: Patrón de dos diagonales con símbolos
Mostrar una matriz de 7x7 donde:
- La diagonal principal (fila == columna) muestre "\".
- La diagonal secundaria (fila + columna == 8) muestre "/".
- El resto muestre un punto ".".
- En el centro (fila 4, columna 4) las dos diagonales se cruzan. Allí imprime una X.
Ejemplo:
    \ . . . . . /  
    . \ . . . / .  
    . . \ . / . .  
    . . . X . . .  
    . . / . \ . .  
    . / . . . \ .  
    / . . . . . \  


**¿Terminaste todo? volvemos a los ejercicios del README principal-*Etapa 2: Estructuras de Datos y Memoria*-**