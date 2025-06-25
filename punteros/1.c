#include <stdio.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int numero = 5;
    int *ptr = &numero;   

    printf("%d\n", numero);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    
    return 0;
}