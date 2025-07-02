        Punteros y memoria dinámica
Objetivo: Dominar malloc, free, strdup, etc.

🧪 Ejercicio A – Crear nodo con malloc
Crea una estructura tipo:
        -----------------------
        typedef struct node {
            char *word;
        } node;
        ----------------------
Alocá memoria dinámica para una palabra y copiála al nodo.

🧪 Ejercicio B – Liberación sin fugas
Asegurate de liberar toda la memoria con free sin perder ningún puntero.

Verificá con valgrind.

        Listas enlazadas
Objetivo: Insertar, buscar, liberar nodos.

🧪 Ejercicio C – Insertar palabras
Implementá una lista donde cada nodo almacene una palabra.

Insertá al inicio, como una pila.

🧪 Ejercicio D – Buscar palabra
Escribí una función bool search(char *word) que recorra la lista y devuelva si existe.

🧪 Ejercicio E – Liberar la lista
Escribí una función free_list() que libere todos los nodos correctamente.