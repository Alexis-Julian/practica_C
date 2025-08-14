/* 35- Escribir un enunciado C para conseguir lo siguiente:
a) Ingresar un texto carácter a carácter hasta que se ingrese ’#’, sin almacenar dicho
texto.
b) Ingresar un texto carácter a carácter hasta que se active el EOF, sin almacenar dicho
texto (para activar el EOF utilizar ctrl+Z en entorno windows y ctrl+D en compiladores on
line).
 */

#include <stdio.h>

int main(){
    while (getchar() != '#');

    while (getche() != '#');

    while(getch() != '#');
}
