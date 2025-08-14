/* 55- Hacer  un  algoritmo  que  muestre  el  mayor  y  el  menor  de  una  serie  de  5  números  que 
vamos introduciendo por teclado.  */

#include <stdio.h>

int main(){
    int greater=0;
    int smaller=0;
    int number;

    printf("\nEnter the number that you wish to save: ");
    scanf("%d", &number);
    smaller = greater = number;

    for (int i = 0; i < 5; i++)
    {
        if (number > greater) greater=number;
        if (number < smaller) smaller = number;

        printf("\nEnter the number that you wish to save: ");
        scanf("%d",&number);
    }
    printf("\nThe greater number is %d",greater);
    printf("\nThe smaller number is %d",smaller);    
}