#include <stdio.h>
#include <string.h>
/* 81- Declarar un tipo de estructura de nombre alumnos para almacenar la siguiente
información:
· nombre del alumno char[20]
· turno char.
Dentro del main declarar dos variables del tipo alumnos y asignarles valores a sus
respectivos campos. Determinar si ambos alumnos pertenecen al mismo turno o no. */

struct alumno {
    char nombre[20];
    char turno;
};

int main(){
    struct alumno leo;
    struct alumno ale;

    printf("Ingrese el nombre del alumno 1: ");
    fgets(leo.nombre, sizeof(leo.nombre),stdin);
    leo.nombre[strcspn(leo.nombre,"\n")] = 0;

    printf("Ingrese el turno del alumno 1: ");
    scanf("%c",&leo.turno);
    fflush(stdin);
    
    printf("Ingrese el nombre del alumno 2: ");
    fgets(ale.nombre,sizeof(ale.nombre),stdin);
    ale.nombre[strcspn(ale.nombre,"\n")] = 0;

    printf("Ingrese el turno del alumno 2: ");
    scanf("%c",&ale.turno);
    
    ale.turno == leo.turno ? printf("Los alumnos estan en el mismo turno"): printf("Los alumnos estan en distinto turno");



    return 0;
}