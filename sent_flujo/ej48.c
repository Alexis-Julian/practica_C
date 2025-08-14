/* 48- Codificar en C un programa que muestre los múltiplos de 2 y de 3 y de ambos
comprendidos entre 1 y 100. */
#include <stdio.h>

int main(){
    for (int i = 2; i < 4; i++)
    {
        int k = 1;
        while (k*i <=100){
            printf("%d\n",k*i);
            k++;
        }
    }
    
}