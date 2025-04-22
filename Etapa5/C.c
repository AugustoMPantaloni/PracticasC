#include <stdio.h>
#include <string.h>

int main (void){
    char palabra1[50];
    char palabra2[50];
    char resultado[100] = "";

    printf("Ingrese una palabra\n");
    fgets(palabra1, 50, stdin);
    palabra1[strcspn(palabra1, "\n")] = '\0';

    printf("Ingrese OTRA palabra\n");
    fgets(palabra2, 50, stdin);
    palabra2[strcspn(palabra2, "\n")] ='\0';

    strcat(resultado, palabra1);
    strcat(resultado, palabra2);

    printf("%s\n", resultado);

    return 0;
}