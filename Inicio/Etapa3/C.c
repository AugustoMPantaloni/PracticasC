#include <stdio.h>

int main(void){
    char eleccion = '1' ;

    while(eleccion != '0'){

    printf("Si queres sumar dos numeros presiona +, si queres sacar el factorial presiona !, si queres salir presiona 0\n");
    scanf(" %c", &eleccion);

    switch(eleccion){
        case '+':{
            float num1, num2;
            printf("Ingrese el primer numero que desea sumar\n");
            scanf("%f", &num1);
            printf("Ingrese el segundo numero que desea sumar\n");
            scanf("%f", &num2);
            float resultado = num1 + num2;
            printf("El resultado es %f", resultado);
            break;
        }
        case '!':{
            int numero;
            int factorial = 1;
            printf("Ingrese el numero entero del cual desea sacar el factorial\n");
            scanf("%d", &numero);       
            for(int i = numero; i > 0; i--){
                factorial = factorial * i;    
            }
            printf("El factorial de %d es %d\n", numero, factorial);
            break;
        }
        case '0':{
            return 0;
            break;
        }
        default:
            printf("Debe ingresar una opcion valida\n");
        }
        while(getchar() != '\n');
    }

    return 0;
}