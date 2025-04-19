#include <stdio.h>
#include <string.h>

int main (void){
    char palabra1[50];
    char palabra2[50];

    printf("Ingrese una palabra\n");
    fgets(palabra1, 50, stdin);

    printf("Ingrese OTRA palabra\n");
    fgets(palabra2, 50, stdin);

    int longitud1 = strlen(palabra1);

    int longitud2 = strlen(palabra2);

    char concat[99];



    return 0;
}