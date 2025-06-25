#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int numero = 5;
    int *ptr =  &numero;

    *ptr = 18;

    printf("%p\n", ptr);
    printf("%d\n", *ptr);

    return 0;
}