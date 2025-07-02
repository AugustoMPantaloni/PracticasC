        Tries (opcional)
Objetivo: Implementar estructura trie para mayor eficiencia.

🧪 Ejercicio 5.1 – Estructura básica de trie
Define:
        --------------------------------
        typedef struct node {
            bool is_word;
            struct node *children[26];
        } node;
        --------------------------------
Implementá funciones para insertar y buscar.

🧪 Ejercicio 5.2 – Carga masiva y búsqueda
Cargá 1000 palabras de un diccionario y hacé búsquedas con check().

