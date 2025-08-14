/* 56- Escribir un programa que solicite el ingreso de un número entero y a partir de él, genere 
una  cuenta  regresiva  hasta  cero,  mostrando  los  sucesivos  valores  hasta  el  último  luego 
de lo cual emitirá un pitido. */
#include <stdio.h>
#include <unistd.h> // Para el delay 
#include <windows.h> // Para el pitido en window

int main(void) {
    int number;
    printf("Insert the second of regresive account that you wish: ");
    scanf("%d",&number);
    for (int i = 0; i < number; i++)
    {
        sleep(1);
    }
    Beep(750, 300); 
    

    return 0;
}