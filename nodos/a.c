#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char word[20];
} node ;

int main(int argc, char *argv[]) {

    node *n = malloc(sizeof(node));
    if(n == NULL){
        printf("Error en memoria.");
        return 1;
    }

    char palabra[20];

    printf("ingrese una palabra corta:\n");
    fgets(palabra, 20, stdin);

    for (int i = 0; palabra[i] != '\0'; i++)
    {   
        n->word[i] = palabra[i];    
    }

    printf("%s", n->word);

    free(n);
    
    return 0;
}