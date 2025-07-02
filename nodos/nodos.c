#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

// Función para imprimir la lista completa
void print_list(node *list)
{
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }
}

int main(void)
{
    node *list = NULL; // Lista vacía al inicio

    // Construimos la lista con 3 números
    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            fprintf(stderr, "Error: malloc failed\n");
            return 1;
        }

        printf("Number: ");
        if (scanf("%d", &n->number) != 1)
        {
            fprintf(stderr, "Error: invalid input\n");
            free(n);
            return 1;
        }

        n->next = list; // Apuntar al nodo actual al inicio
        list = n;       // Nuevo nodo es ahora la cabeza de la lista
    }

    printf("\nLista creada:\n");
    print_list(list);

    // Liberar memoria
    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }

    return 0;
}
