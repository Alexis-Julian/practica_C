/* 
91- Escribir un programa que lea el radio de un círculo y que imprima el diámetro del mismo,
su circunferencia y su área. Utilice el valor constante 3.14159 para “PI” y defina al mismo
como constante simbólica. Utilizar funciones para cada uno de los diferentes cálculos a
realizar.  
*/
#include <string.h>
#include <stdio.h>
#include <math.h>

#define PI 3.14159

float calcular_area(float radio);
float calcular_diamentro(float radio);
float calular_circurferencia(float radio);


int main(){
    float radio;
    printf("\nIngrese el radio: \n");
    scanf("%f",&radio);
    printf("\nEl area de su circulo es: %0.2f", calcular_area(radio));
    printf("\nEl diametro de su circulo es: %0.2f",calcular_diamentro(radio));
    printf("\nLa circunferencia de su circulo es: %0.2f ",calular_circurferencia(radio));
}

float calcular_area(float radio){
    return PI * pow(radio,2);
}

float calcular_diamentro(float radio){
    return radio*2.0;
}

float calular_circurferencia(float radio){
    return 2*PI*radio;
}


