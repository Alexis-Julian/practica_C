#include <stdio.h>

/* 16- ¿Qué valor queda en cada variable involucrada, después de ejecutar el enunciado que
se indica, suponiendo que antes de ello todas las variables contienen el valor 5?
a) product * = x++ ;
 R: ________________________________________
b) result = ++x + x;
 R: ________________________________________ */

int main(){
    int x= 5;
    /* int product * = x++; */
    int result = ++x +x;
    printf("%d",result) 
}