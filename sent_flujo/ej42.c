/* Escribir el algoritmo necesario para calcular y mostrar el cuadrado de un número
ingresado por teclado. El número debe ser mayor que cero, en caso de error que aparezca
el mensaje "ERROR, el número debe ser mayor que cero". El programa termina su
ejecución cuando se ingresa un 0. */

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
    float a=0;
    do{
        printf("Insert a number to calculate double ");
        scanf(" %f",&a);
        if (a >= 0){
            printf("Your double number is : %.2f", a*a);
        }else{
            printf("You are insert a wrong number. Try again..");
        }
        printf("\nDo you want to try again?\n");
        printf("Enter (Y) to continue or (N) to no continue.\n");

        fflush(stdin);
    }while(toupper(getchar()) == 'Y');

}