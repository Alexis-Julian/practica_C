/* 83- De los alumnos de una escuela se registra su apellido, nombre y su altura. Como máximos
hay 400 alumnos.
Diseñar un algoritmo que indique el nombre del alumno más alto y su altura (sólo uno es
el más alto). */

#include <stdio.h>
#include <string.h>

struct alumno {
    char apellido[15];
    char nombre[15];
    int altura; 
};

int main(){
    struct alumno alumnos[4];
    struct alumno aluganador;
    int i =0;
    do
    {
        fflush(stdin);

        printf("Ingrese el nombre del alumno %d: ",i+1);
        fgets(alumnos[i].nombre,sizeof(alumnos[i].nombre),stdin);
        alumnos[i].nombre[strcspn(alumnos[i].nombre,"\n")] = 0;
        
        printf("Ingrese el apellido %d: ",i+1);
        fgets(alumnos[i].apellido,sizeof(alumnos[i].apellido),stdin);
        alumnos[i].apellido[strcspn(alumnos[i].apellido,"\n")] = 0;

        printf("Ingrese la altura del alumno %d: ",i+1);
        scanf("%d",&alumnos[i].altura);
        fflush(stdin);

        
        i++;
    } while (!(getchar() == 'N' && i == 4));
    
    aluganador = alumnos[0];
    
    for (int k = 1; k < i; k++)
    {
        if (strcmp(alumnos[k].nombre,aluganador.nombre) && (alumnos[k].altura >aluganador.altura ))
            aluganador = alumnos[k];
    }
    
    printf("\nAlumno ganador nombre: %s",aluganador.nombre);
    printf("\nAlumno ganador apellido: %s",aluganador.apellido);
    printf("\nAlumno ganador altura: %d",aluganador.altura);

}