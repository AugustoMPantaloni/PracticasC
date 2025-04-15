##  EJERCICIO Nº 1
Realiza un programa con 3 variables, dos para números enteros, y otra llamada "resultado". Inicializa las variables numéricas con los valores 7 y 2, respectivamente y:
- Muestra por pantalla la resta de estos dos números.
- Muestra por pantalla la suma de estos dos números, multiplicada por 10. Y ese 10, será el valor de una constante creada con anterioridad por nosotros.
- Intenta realizar el mismo ejercicio sin la creación de la variable "resultado".

##  EJERCICIO Nº2
Realiza un programa que contenga un menú de 3 opciones. Estas opciones serán 1, 2 y 3. Si el usuario introduce el número 0, el programa acabará, pero mientras elija una opción válida que no sea el 0 el programa debe seguir. 
- Estaría bien que si introduce una opción que no sea del menú, o sea, ni 1, ni 2, ni 3, el programa te avisara. 
Es decir, que el resultado del programa tiene que ser como se aprecia en el vídeo en la parte inferior de la lección.

##  EJERCICIO Nº3
- Crea una función llamada Máximo10, que devuelva un int, y reciba por parámetro una variable tipo int también. La cabecera de la función puede ser la siguiente:
int Máximo10 (int n)
Tienes que comprobar que la variable "n" tenga un número comprendido entre el 1 y el 10. Si "n" no está entre 1 y 10, devuelves un 0, y si "n" tiene un valor entre 1 y 10, devuelves ese mismo valor. 
- Una vez programada la función, el main hará lo siguiente:
Creamos una variable tipo int llamada "longitud_array". Pediremos al usuario que introduzca un número entre el 1 y el 10. Con la función que hemos creado comprobaremos que ese número está entre el 1 y el 10, si no es así mostraremos por pantalla que la longitud no es correcta y terminará el programa. 
Si el valor es válido crearemos un array con la longitud dada por el usuario y luego rellenaremos el array con números del 1 hasta la longitud, es decir, si el usuario introduce un 4, debemos crear un array de índice 4 y los valores que les daremos serán: 1, 2, 3 y 4, respectivamente.