/* 67- Escribir un programa que cree un arreglo de 26 elementos y que además genere y 
guarde en ellas 26 las letras minúsculas del alfabeto.  */

#include <stdio.h>

void charge_alphabet(int intalphabet[26]);
void show_alphabet(int alphabet[26]);


int main(){
    int alphabet[26];
    charge_alphabet(alphabet);
    show_alphabet(alphabet);
    return 0;
}

void charge_alphabet(int alphabet[26]){
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = i + 97;
    }
    
}

void show_alphabet(int alphabet[26]){
    for (int i = 0; i < 26; i++)
    {
        printf("\n%c",(char)alphabet[i]);
    }
    
}
