/* 33- Escribir el algoritmo que me permita leer un número decimal que representa una
cantidad de grados Celsius y convierta dicho valor a la cantidad equivalente en
grados Fahrenheit. La salida del programa puede ser de la siguiente forma: 100
grados Celsius son 212 grados Fahrenheit.  */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
float convertofarhenheit(float grados);


float convertofarhenheit(float grados){
    return (grados * 9/5) + 32;
}

int main(){
    float grados;
    float fahrenheit;
    scanf("%f",&grados);
    fahrenheit = convertofarhenheit(grados);
    printf("%f grados Celsius son %f grados Fahrenheit",grados,fahrenheit);
}
 