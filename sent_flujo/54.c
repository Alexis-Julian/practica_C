/* 54- Realizar la tabla de multiplicar de un número entre 0 y 10 de forma que se visualice de la 
siguiente forma: 
4x1= 4 
4x2= 8 
.......... 
*/
#include <stdio.h>
int main(){
    int n =0;
    printf("Insert the number you want to calculate:  ");
    scanf("%d",&n);
    for (int i = 0; i <= 10; i++)
    {
        printf("\n %dx%d = %d",n,i,(n*i));
    }
    

}


