
/* 9- Hacer un algoritmo que muestre todos los números pares que hay desde la unidad hasta 
un número que introducimos por teclado. El programa debe poder ejecutarse mientras el 
usuario lo requiera */


#include <stdio.h>
#include <ctype.h>

int main(){
    int a=0;
    do{
        printf("Insert a number to calculate its even numbers\n");
        scanf("%d",&a);
        
        for (int i = 0; i < a; i++)
        {
            (i % 2 == 0) && (printf("\nnumber: %d \n",i)); 
        }
        
        fflush(stdin);
    }while(toupper(getchar()) !='Y');
}