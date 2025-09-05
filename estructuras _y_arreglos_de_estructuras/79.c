/* 79- Declarar un tipo de estructura de nombre alumnos para almacenar la siguiente
información:
· nombre del alumno char[20]
· nº de legajo char[5]
· domicilio char[15]
· turno char
Declarar una variable del tipo alumnos dentro del main y mostrar todos sus campos. */

#include <stdio.h>
#include <string.h>

struct alumno {
    char nombre[20];
    char apellido[20];
    int nro_legajo;
    char domicilio[15];
    char turno;
};


int main(){
    struct alumno leo;
    printf("Ingrese el nombre del alumno: ");
    fgets(leo.nombre,sizeof(leo.nombre),stdin);    
    leo.nombre[strcspn(leo.nombre,"\n")] = 0;
    

    printf("Ingrese el apellido: ");
    fgets(leo.apellido,sizeof(leo.apellido),stdin);    
    leo.apellido[strcspn(leo.apellido,"\n")] = 0;


    printf("Ingrese el nro de legajo: ");
    scanf("%d",&leo.nro_legajo); 
    getchar();

    printf("Ingrese el domicilio: ");
    fgets(leo.domicilio,sizeof(leo.domicilio),stdin);    
    leo.domicilio[strcspn(leo.domicilio,"\n")] = 0;

    printf("Ingrese el turno: ");
    scanf("%c",&leo.turno);
    
    printf("\nNombre: %s",leo.nombre);
    printf("\nApellido: %s",leo.apellido);
    printf("\nLegajo: %d",leo.nro_legajo);
    printf("\nDomicilio: %s",leo.domicilio);
    printf("\nTurno: %c\n",leo.turno);


    return 0;
}