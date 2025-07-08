#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 26

typedef struct node
{
    char *word;
    struct node *next;
}node;

node *hashTable[SIZE];

int hash(char *word){
    return tolower(word[0]) - 'a';
}

bool insert(char *word)
{
    int index = hash(word);

    node *newNode = malloc(sizeof(node));
    if(!newNode) return false;

    newNode ->word = malloc(strlen(word) + 1);
    strcpy(newNode->word, word);
    newNode->next =  hashTable[index];
    hashTable[index] = newNode;

    return true;
}

bool search(char *word)
{
    int index = hash(word);
    node *cursor = hashTable[index];

    while(cursor)
    {
        if(strcmp(cursor->word, word) == 0)
        {
            return true;
        }
        cursor = cursor->next;
    }

    return false;
}

void unload()
{
    for (int i = 0; i < SIZE; i++)
    {
        node *cursor = hashTable[i];
        while(cursor)
        {
            node *tmp = cursor;
            cursor = cursor->next;
            free(tmp->word);
            free(tmp);
        }
    }
}

int main(int argc, char *argv[]) {
    for (int i = 0; i < SIZE; i++)
    {
        hashTable[i] = NULL;
    }

    FILE *archivo = fopen("archivo.txt", "r");
    if(archivo == NULL)
    {
        printf("Error al abrir el archivo");
        return 1;
    }

    char buffer[100];
    while (fscanf(archivo, "%s", buffer) != EOF)
    {
        insert(buffer);
    }

    FILE *archivo2 = fopen("archivo2.txt", "r");
    if(archivo2 == NULL)
    {
        printf("Error al abir el archivo");
        return 1;
    }

    char buffer2[100];
    while(fscanf(archivo2, "%s", buffer2) != EOF)
    {
        if(search(buffer2))
        {
            printf("palabra: %s encontrada\n", buffer2);
        }
        else
        {
            printf("palabra: %s NO encontrada\n", buffer2);
        }
    }

    fclose(archivo);
    fclose(archivo2);

    unload();

    return 0;
}