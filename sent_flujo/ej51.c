/* 51- Codificar  en  C  un  algoritmo  que  permita  ingresar  10  números,  ninguno  de  ellos  igual  a 
cero. Se pide sumar los positivos, obtener el producto de los negativos y luego mostrar 
ambos resultados */

#include <stdio.h>

int main(){
    int number=0, summative=0, productive=1;
    for (int i = 0; i < 10; i++)
    {    
        do{
            printf("Insert your number \n");
            scanf("%d",&number);
        }while(number == 0);

        if(number > 0){
            summative += number;
        }else{
            productive*= number;
        }
    }

    printf("\nYour summative of positive number is %d and your productive %d",summative,productive);
}