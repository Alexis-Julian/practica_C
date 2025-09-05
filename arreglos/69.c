/* 69- Sumar números en un vector de 10 elementos enteros hasta que el usuario lo desee. 
Cuando finalicen las sumas visualizar por pantalla lo siguiente: 
Elemento 0 cantidad total 
............. 
Elemento 9 cantidad total s */

#include <stdio.h>
#define MAX 10

void mostrar_numeros(float sumas[MAX]);

int main(){
    float sumas[MAX], num;
    int i = 0;

    do
    {
        printf("Ingrese el numero que desea sumar en la posicion %d \n",(i+1));
        
        scanf(" %f",&num);
        sumas[i]+= num;

        printf("\nDesea continuar sumando en esa posicion (Y)-Si (N)-No ?");
        


        fflush(stdin);
        if (getchar() =='N') i++;

    } while (i!=MAX);
    mostrar_numeros(sumas);
    
    return 0;
}

void mostrar_numeros(float sumas[MAX]){
    for (int i = 0; i < MAX; i++)
    {
        printf("\nEn la posicion numero %f quedo %i",sumas[i], (i+1));
    }
    
}