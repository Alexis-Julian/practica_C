/* 47- Hacer el algoritmo que muestre los números pares entre el 1 y el 100 a razón de 6 por
línea separados por 3 blancos. */

#include <stdio.h>
int main(){
    for (int i = 0; i < 100; i++)
    {
        i % 2 == 0 ? printf("The number %d is odd \n",i) : printf("The number %d is even \n ",i);
    }

    return 0;
}