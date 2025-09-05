/* 86- Un profesor de matemática de un establecimiento educativo registra de cada alumno Nº
de legajo, nombre y promedio. Según el promedio desea saber cuántos alumnos
aprobaron (promedio mayor o igual a 7), cuantos rinden en diciembre (promedio menor
a 7 y mayor o igual a 4) y cuantos rinden examen en marzo (promedio menor a 4).
Además, desea conocer el Nº de legajo y nombre del alumno con mejor promedio. El
profesor tiene 300 alumnos en sus clases. */

#include <stdio.h>
#include <string.h>


struct alumno {
    char nro_legajo[10];
    char nombre[10];
    float promedio;
};

int mostrar_alumno(struct alumno mostrarAlumno);

int main(){
    
    struct alumno alumnos[10];
    int i = 0;

    do
    {
        fflush(stdin);

        printf("Ingrese el nombre del alumno: ");
        fgets(alumnos[i].nombre,sizeof(alumnos[i].nombre),stdin);
        alumnos[i].nombre[strcspn(alumnos[i].nombre,"\n")] = 0;

        printf("Ingrese numero de legajo: ");
        fgets(alumnos[i].nro_legajo,sizeof(alumnos[i].nro_legajo),stdin);
        alumnos[i].nro_legajo[strcspn(alumnos[i].nro_legajo,"\n")] = 0;

        printf("Ingrese el numero del promedio: ");
        scanf("%f",&alumnos[i].promedio);
        fflush(stdin);
        
        i++;
    } while (!(getchar() == 'N'));
    fflush(stdin);
    
    struct alumno mejorAlumno = alumnos[0];

    for (int k = 0; k <= i; k++)
    {

        /* Buscar mejor alumno con promedio mas alto */
        if (alumnos[k].promedio > mejorAlumno.promedio)
            mejorAlumno = alumnos[k]; 

        /* Aprobacion directa */
        (alumnos[k].promedio >= 7)  
            && (mostrar_alumno(alumnos[k]));

        /* Regular */
        (alumnos[k].promedio < 7 && alumnos[k].promedio >= 4)  
            && (mostrar_alumno(alumnos[k]));

        /* Globalizador */
        (alumnos[k].promedio < 4)  
            && (mostrar_alumno(alumnos[k]));
    }

    printf("\nEl mejor alumno con promedio fue!! \n");
    mostrar_alumno(mejorAlumno);
    

    return 0;
}


int mostrar_alumno(struct alumno mostrarAlumno){
    mostrarAlumno.promedio > 7
    ? printf("\nAprobacion directa para el alumno\n")
    : mostrarAlumno.promedio < 4
        ? printf("\nRegularidad no alcanzada para el alumno\n")
        : printf("\nRegularidad para el alumno\n");

    printf("\nNombre del alumno: %s",mostrarAlumno.nombre);
    printf("\nNro de legajo del alumno: %s",mostrarAlumno.nro_legajo);
    printf("\nPromedio del alumno: %f\n",mostrarAlumno.promedio);
}