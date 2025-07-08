#include <stdio.h>
#include <stdlib.h>



int search(int number, node *list)
{
    while(list != NULL)
    {
        if(list->number == number){
            return 1;
        }
        list = list->next;
    }
    return 0;
}

typedef struct node{
    int number;
    struct node *next;
}node;

int main(int argc, char *argv[]) {
    node *list = NULL;

    for (int i = 0; i < 10; i++)
    {
        node *n = malloc(sizeof(node));
        if(n == NULL){
            return 1;
        }
        n->number = i + 1;
        n->next = list;
        
        list = n;
    }

    node *tmp;

    while(list != NULL){
        tmp = list;
        list = list->next;
        free(tmp);
    }

    return 0;
}