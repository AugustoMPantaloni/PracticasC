#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    typedef struct Persona {
        char nombre[50];
        int edad;
    }Persona;

    Persona *a = malloc(sizeof(Persona));

    strcpy((*a).nombre, "Augusto");
    (*a).edad = 27;

    
    printf("%s\n", a -> nombre);
    printf("%d\n", a -> edad);
    
    free(a);

    return 0;
}