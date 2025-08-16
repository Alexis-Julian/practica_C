/* 
    66- Escribir un programa que ingrese 10 números enteros, los cargue en un arreglo
    unidimensional, busque el mayor de ellos, calcule el promedio y muestre:
    LOS NÚMEROS INGRESADOS SON : ...................
    EL MAYOR DE ELLOS ES: ....................................
    SU PROMEDIO ES : ............................................
*/
#include <stdio.h>
#define MAX 10

int charge_number(int numbers[10]);
int search_number_max(int numbers[10]);
float calculate_average(int numbers[10]);

int main(){
    int numbers[10];
    charge_number(numbers);
    printf("\nThe average is %f", calculate_average(numbers));
    printf("\nThe max number is %d", search_number_max(numbers));
    return 0;
}

int charge_number(int numbers[10]){
    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d",&numbers[i]);
    }
    
}

float calculate_average(int numbers[10]){
    int summ = 0;
    for (int i = 0; i < MAX; i++)
    {
        summ += numbers[i];
    }
    return (summ/MAX*1.0);
    
}

int search_number_max(int numbers[10]){
    int maxNumber = numbers[0];

    for (int i = 0; i < MAX; i++)
    {   
        (numbers[i] > maxNumber) && (maxNumber= numbers[i]);
    }
    return maxNumber;
}