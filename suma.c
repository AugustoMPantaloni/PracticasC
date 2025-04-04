#include <stdio.h> //Libreria para entrada y salida de datos

float num1,num2; //Variables globales

void pedirDatos(){ //Funcion void porque no retorna nada
    printf("Ingrese el primer numero: "); //Mostramos al usuario un texto en consola
    scanf("%f", &num1); //Espacio para que el usario ingrese un dato

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);
};


float suma( float a, float b){ //Funcion float por si los datos son con punto flotante y para sumar lo mismos.
    return a + b; 
}

int main (){ //Funcion main que es la principal en cualquier programa de C
    pedirDatos(); //Llamamos a la funcion 

    float resultado = suma(num1, num2); //Llamos a la funcion suma y guardamos el resultado en una variable

    printf("La suma de los datos ingesados es: %.2f\n", resultado); //Mostramos por consola el resultado

    return 0; //Retornamos 0 para indicar que todo salio bien y termina la funcion
}




