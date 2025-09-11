#include <stdio.h>

/* 89- Diseñar un programa en C para calcular el cubo de los números del 1 al 5 utilizando una
función definida por el usuario para realizar el cálculo del cubo. El prototipo de la función
es el siguiente:
int cubo (int base); */


int cubo (int base);

int main(){
    for (int i = 1; i < 6; i++)
    {
        printf("\nNumero elevado al cubo: %d", cubo(i));
    }
    
}

int cubo(int base){
    return base*base*base;
}

