#include <stdio.h>

void print(char *c){
    while(*c != '\0'){
        printf("%c", *c);
        c++;
    }
}


int main(int argc, char *argv[]) {
    char str[] = "hola";
    char *ptr = str;

    print(ptr);

    return 0;
}