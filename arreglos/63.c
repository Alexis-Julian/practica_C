/* 63- Escribir un programa que permita el ingreso de 1000 números, los almacene en un
arreglo, luego ingrese otro número y determine entre los anteriores cuales son
mayores o iguales al último número ingresado. Con los mayores calcular su sumatoria y
mostrar:
LA SUMATORIA DE LOS NÚMEROS MAYORES QUE nro_ingresado ES sumatoria. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MAX 1000

void charge_number(int numbers[]);


int main(){
    int numbers[MAX];
    int number;
    int summ;
    printf("Enter a number: ");
    scanf("%d",&number);

    charge_number(numbers);

    for (int i = 0; i < MAX; i++)
    {
        (numbers[i] >= number) 
            ? (summ += numbers[i], printf("\n%d ", numbers[i])) 
            : printf("\nEl numero es mas chico de lo ingresado %d",numbers[i]);
    }
    

    return 0;
}


void charge_number(int numbers[]){
    srand(time(NULL));
    for (int i = 0; i < MAX ; i++)
    {
        numbers[i] = rand() % 1000;
    }
    
}