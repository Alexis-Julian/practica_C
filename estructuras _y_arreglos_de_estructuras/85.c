/* 85- Se ingresa el apellido, la nota y el legajo de los 8 mejores alumnos de un curso. Realizar
un programa que permita modificar los datos ingresados hasta que el usuario lo
determine. Para ello se ingresa el legajo y la nota a modificar. Si no se encuentra el legajo
se deberá mostrar un mensaje de error. Finalmente mostrar los datos ordenados por
legajo. */


#include <stdio.h>
#include <string.h>
#define MAX 8

struct alumno{
    char apellido[20];
    char nombre[20];
    char legajo[5];
    int nota;

};

int buscar_alumno(struct alumno alumnos[MAX],char legajo[5],int maximo);




int main(){
    struct alumno alumnos[MAX];
    int i =0;
    do
    {
        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        fgets(alumnos[i].nombre,sizeof(alumnos[i].nombre),stdin);
        alumnos[i].nombre[strcspn(alumnos[i].nombre,"\n")] = 0;

        printf("Ingrese el apellido del alumno: ");
        fgets(alumnos[i].apellido,sizeof(alumnos[i].apellido),stdin);
        alumnos[i].apellido[strcspn(alumnos[i].apellido,"\n")] = 0;

        printf("Ingrese el legajo: ");
        fgets(alumnos[i].legajo,sizeof(alumnos[i].legajo),stdin);
        alumnos[i].legajo[strcspn(alumnos[i].legajo,"\n")] = 0;

        printf("Ingrese el numero de la nota correspondiente: ");
        scanf("%d",&alumnos[i].nota);
        fflush(stdin);

        i++;
    } while (!(getchar() == 'N' || i == 8));
    
    char legajo[5];
    int posAlumno = -1;
    do
    {
        fflush(stdin);
        printf("Ingrese el numero de legajo del alumno que desea buscar: ");
        fgets(legajo,sizeof(legajo),stdin);
        legajo[strcspn(legajo,"\n")] = 0;

        posAlumno= buscar_alumno(alumnos,legajo,i);
        while (posAlumno == -1){
            printf("Legajo no encontrado!! Ingrese uno nuevamente: ");
            fgets(legajo,sizeof(legajo),stdin);
            legajo[strcspn(legajo,"\n")] = 0;
            posAlumno= buscar_alumno(alumnos,legajo,i);
        }
        
        printf("Ingrese la nueva nota del alumno %s : ",alumnos[posAlumno].nombre);
        scanf("%d",&alumnos[posAlumno].nota);
        
        printf("\nEl alumno modificado seria de esta manera\n");

        printf("\nNombre del alumno modificado: %s ",alumnos[posAlumno].nombre);
        printf("\nApellido del alumno modificado: %s ",alumnos[posAlumno].apellido);
        printf("\nLegajo del alumno modificado: %s ",alumnos[posAlumno].legajo);
        printf("\nNota del alumno modificado: %d ",alumnos[posAlumno].nota);
        

        fflush(stdin);
    } while (!(getchar() == 'N'));
    

    
    return 0;
}



int buscar_alumno(struct alumno alumnos[MAX],char legajo[5],int maximo){
    for (int i = 0; i < maximo; i++)
    {
        if (strcmp(alumnos[i].legajo,legajo) == 0)
            return i;
    }
    
    return -1;
}