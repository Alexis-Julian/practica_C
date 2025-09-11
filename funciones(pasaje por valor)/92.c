/* 
    92- Escribir un programa que ingrese 10 números enteros, los cargue en un arreglo
    unidimensional, y a través de dos funciones busque el mayor de ellos y calcule el
    promedio y muestre:
    LOS NÚMEROS INGRESADOS SON : ...................
    EL MAYOR DE ELLOS ES: .................................
    SU PROMEDIO ES : .........................................
    Las funciones a utilizar deben llamarse máximo y media respectivamente. Diseñar los
    prototipos correspondientes.  
*/

#include <stdio.h>

#define MAX 10

float maximo(float list[MAX]);
float media(float list[MAX]);

int main(){
    float numeros[MAX];
    for (int i = 0; i < MAX; i++)
    {
        printf("\nIngrese el numero que usted desea, que corresponde a la posicion %d \n",i+1);
        scanf("%f",&numeros[i]);
    }

    printf("\nLos numeros ingresados son\n");
    for (int i = 0; i < MAX; i++)
        printf("<%0.2f> ",numeros[i]);
    
    printf("\nEl maximo de esos numeros es: %0.3f",maximo(numeros));
    printf("\nEl promedio de todos esos numeros es: %0.3f",media(numeros));
    
}

float maximo(float list[MAX]){
    float maximo= 0;

    for (int i = 0; i < MAX ; i++)
        (list[i] > maximo) && (maximo = list[i]);

    return maximo;
}

float media(float list[MAX]){
    float suma = 0;

    for (int i = 0; i < MAX ; i++)
        suma += list[i];    

    return  suma / MAX;
    
}