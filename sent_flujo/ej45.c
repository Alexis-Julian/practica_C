/* 45- Codificar en C un programa que lea 20 caracteres indique cuántas "a" se ingresaron,
cuantas "e, i, o, u". */
#include <stdio.h>

int main(){
    int a=0,b=0;
    for (int i = 0; i < 6; i++)
    {
        switch (getchar())
        {
        case 'a':
            a++;
            break;
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            b++;
            break;
    }}
    
   printf("You have inserted %d 'a', %d 'e,i,o,u', %d consonants", a, b, (-a - b + 6));

    return 0;
}