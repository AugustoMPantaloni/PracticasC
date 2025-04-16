#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    typedef struct Estructura_alumnos{
        char nombre[50];
        int dni;
        int edad;
    } Alumno;

    Alumno listaAlumnos [3] = {}; 

    for(int i = 0; i < 3; i++){
        printf("Ingrese el nombre del alumno\n");
        fgets(listaAlumnos[i].nombre, 50, stdin);
        listaAlumnos[i].nombre[strcspn(listaAlumnos[i].nombre, "\n")] = 0;

        printf("Ingrese el DNI\n");
        scanf("%d", &listaAlumnos[i].dni);

        printf("Ingrese la edad\n");
        scanf("%d",&listaAlumnos[i].edad);

        while(getchar() != '\n');
    }


while(1){
    char dniIngresado[20];
    printf("Ingrese un DNI para buscar a un alumno o escriba salir para cortar la ejecucion\n");
    fgets(dniIngresado, 20, stdin);
    
    dniIngresado[strcspn(dniIngresado, "\n")] = 0;

    if(strcmp(dniIngresado, "salir") == 0){
        printf("Cortando la ejecucion\n");
        return 0;
    }

    int dni = atoi(dniIngresado);

    int encontrado = 0;
    for(int i = 0; i < 3; i++){
        if(listaAlumnos[i].dni == dni){
            printf("dni: %d\n", listaAlumnos[i].dni);
            printf("nombre: %s\n", listaAlumnos[i].nombre);
            printf("edad: %d\n", listaAlumnos[i].edad);
            encontrado = 1;
            break;
        }      
    }

    if (encontrado == 0){
        printf("No se encontro ningun alumno");
    }
}
    return 0;
}