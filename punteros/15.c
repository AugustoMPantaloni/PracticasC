#include <stdio.h>

void copiar(char *strOrigen, char *strDestino){
    while(*strOrigen != '\0'){
        *strDestino = *strOrigen;
        strDestino++;
        strOrigen++;
    }
    *strDestino = '\0';
}

int main(int argc, char *argv[]) {
    char strOrigen[] = "hola";
    char strDestino[50];

    char *ptr1 = strOrigen;
    char *ptr2 = strDestino;

    copiar(ptr1, ptr2);

    while(*ptr2 != '\0'){
        printf("%c", *ptr2);
        ptr2++;
    }
    return 0;
}