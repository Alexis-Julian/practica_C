/* 82- Declarar un tipo de estructura de nombre alumnos para almacenar la siguiente
información:
· nombre del alumno char[20]
· nº de legajo char[5]
· domicilio char[15]
· turno char
Luego en el main declarar un arreglo para cada uno de los 300 alumnos de un
establecimiento.
Asignar en la 1ª estructura del arreglo los siguientes datos: “Juan Gomez”, “123245”, “San
Juan 1056”, ‘M’. Finalmente mostrar los datos cargados en la posición 0 del arreglo.
 */

#include <stdio.h>
#include <string.h>

struct alumno {
    char nombre[20];
    char legajo[5];
    char domicilio[15];
    char turno;
};


int main(){
    struct alumno alumnos[10];
    strcpy(alumnos[0].nombre,"Juan Gomez");
    strcpy(alumnos[0].legajo,"12345");
    strcpy(alumnos[0].domicilio,"San Juan 1056");
    alumnos[0].turno= 'M';

    printf("\n Nombre del primer alumno: %s",alumnos[0].nombre);
    printf("\n Legajo del primer alumno: %s",alumnos[0].legajo);
    printf("\n Domicilio del primer alumno: %s",alumnos[0].domicilio);
    printf("\n Turno del primer alumno: %c",alumnos[0].turno);
}