#include <stdio.h>

int main(int argc, char *argv[]) {
    char str[] = "hola";
    char *ptr = str;

    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    
    return 0;
}