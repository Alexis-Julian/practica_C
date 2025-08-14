/* 34- Diseñar el algoritmo necesario para que habiéndose leído el valor de 2 variables
NUM1 y NUM2 se intercambien los valores de las variables, es decir que el valor
que tenía NUM1 ahora lo contenga NUM2 y viceversa.
 */

#include <stdio.h>

int main(){
    int num1,num2,aux;

    printf("\nInsert first number\n");
    scanf("%d",&num1);
    
    printf("\nInsert second number\n");
    scanf("%d",&num2);

    aux= num1;
    num1=num2;
    num2=aux;

    printf("\nNow, your first numer is %d ",num1);
    printf("\nNow, your second numer is %d ",num2);
    
    return 0;
}