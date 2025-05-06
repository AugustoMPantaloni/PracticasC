#include <stdio.h>

#define PI 3.14
#define g 9.81

int main (void){

    //Sacar el area de un circulo
    float A; //Area
    int R = 5; //Radio
    A = PI * (R * R); //Forumla para sacar el Area
    printf("El area es %f", A); //Resultado

    return 0;
}