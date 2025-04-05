#include <stdio.h>

int main(){
    float num1;

    printf("Ingrese los grados Celsius para transformarlos a Fahrenheit\n");
    scanf("%f", &num1);

    float resultado = num1 * 1.8 + 32;

    printf("Los grados en Fahrenheit son: %.2f\n", resultado);

    return 0;
}