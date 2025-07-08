#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//Definimos un tamaño
#define SIZE 26

//Definimos un tipo de dato
typedef struct node
{
    char *word;
    struct node *next;
} node;

node *hashTable[SIZE];

//Funcion hash
int hash(const *word)
{
    return tolower(word[0]) - 'a';
}

//Funcion para insertar una palabra
bool insert(char *word)
{
    int index = hash(word);

    node *newNode = malloc(sizeof(node));
    if(!newNode) return false;

    strcpy(newNode->word, word);
    newNode->next = hashTable[index];
    hashTable[index] = newNode;
}

//Funcion para buscar una palabra
bool search(char *word){
    int index = hash(word);
    node *cursor = hashTable[index];

    while(cursor){
        if(strcmp(cursor->word, word) == 0){
            return true;
        }
        cursor = cursor -> next;
    }
    
    return false;
}


int main(int argc, char *argv[]) {
    
    return 0;
}