#include <stdio.h>

int main() {
    float num1, num2;

    printf("¿Necesitas calcular el area?\n");

    printf("Ingrese la base:");
    scanf("%f", &num1);

    printf("Ingrese la altura: ");
    scanf("%f", &num2);

    float area = num1 * num2;

    printf("El area es: %.2f\n", area);

    return 0;
}