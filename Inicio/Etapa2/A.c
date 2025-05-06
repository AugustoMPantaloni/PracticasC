#include <stdio.h>

int main (void){
    double num1;
    double num2;
    char operacion;
    double resultado;

    printf("Ingrese el primer numero para la operacion\n");
    scanf("%lf", &num1);

    printf("ingrese el segundo numero para la operacion\n");
    scanf("%lf", &num2);
    while (getchar() != '\n');

    printf("ingrese la operacion a ejecutar\n");
    printf("+ , - , * , /\n./");
    scanf("%c", &operacion);

    switch (operacion){
        case '+':
            resultado = num1 + num2;
            printf("El resultado de la suma es %lf\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("El resultado de la resta es %lf\n", resultado);
            break;  
        case '*':
            resultado = num1 * num2;
            printf("El resultado de la multiplicacion es %lf\n", resultado);
            break;
        case '/':
            resultado = num1 / num2;
            printf("El resultado de la division es %lf\n", resultado);
            break;
        default:printf("No es una operacion valida");
    }

    return 0;
}