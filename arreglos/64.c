/* 64- Escribir un programa que ingrese y almacene 1000 números y que los muestre
ordenados según un indicador de criterio de ordenamiento que también debe
ingresarse por teclado. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5

void charge_number(int numbers[]);
int compare(const void *a, const void *b);
void show_number(int numbers[]);

#include <stdio.h>
#include <stdlib.h>

/* int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b); // comparación ascendente
} */

int main(){
    int numbers[MAX];
    int n = sizeof(numbers)/sizeof(numbers[0]);

    charge_number(numbers); 
    show_number(numbers);
    
    printf("\n");
    
    qsort(numbers,n,sizeof(int),compare);
    show_number(numbers);

    return 0;
}

void show_number(int numbers[]){
    for (int i = 0; i < MAX; i++)
    {
        printf("\n%d",numbers[i]);
    }
    
}

void charge_number(int numbers[]){
    srand(time(NULL));
    for (int i = 0; i < MAX; i++)
    numbers[i] = rand() % 100000;
    
}

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
    
}