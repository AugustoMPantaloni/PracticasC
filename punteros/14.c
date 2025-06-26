#include <stdio.h>

void longitud(char *s){
    int longitud = 0;
    while(*s != '\0'){
        longitud += 1;
        s++;
    }
    printf("%d", longitud);
}

int main(int argc, char *argv[]) {
    char str[] = "hola";
    char *ptr = str;

    longitud(ptr);
    
    return 0;
}