#include <stdio.h>
#include <stdbool.h>

/* 13- Construir una expresión para cada una de las siguientes condiciones:
a) El valor de la variable num no está entre 1 y 5
R: _______________________________________________________
b) El valor de la variable car no es el carácter ‘A’ ni el carácter ‘Z’.
R: _______________________________________________________
c) La variable num está entre 0 y 9 pero no es 3.
R: ______________________________________________________ */

int main(){
    int num;
    char car;
    int num1;
    bool isTrue;

    isTrue = num <1 && num > 5  ;
    isTrue = car != 'A' && car !='Z';
    isTrue =  num != 3 && num >= 0 && num <= 9 ;
    return 0;
}