/* 72- Leer 20 números enteros (positivos y negativos) distintos de cero. Mostrar el vector
tal como fue ingresado y luego mostrar los positivos ordenados en forma decreciente
y por último mostrar los negativos ordenados en forma creciente. */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10


void sort_bubble(int list[10]);
void main_logic(int list[10]);
void show_array(int list[10]);

int main(){
    int a[MAX];
    int opc;
    for (int i = 0; i < MAX; i++)
    {
        do
        {
            printf("\nIngrese su numero: ");
            scanf("%d",&opc);

        } while (opc == 0);
        a[i] = opc;
        
    }

    main_logic(a);
    return 0;
}

void main_logic(int list[MAX]){
    int i =10;
    /* Muestra array sin ordenar */
    printf("\nFORMA SIN ORDENAR\n");
    show_array(list);

    /* Mostrar array ordeando en forma creciente */

    sort_bubble(list);

    printf("\nFORMA ORDENADA\n");
    do
    {
        printf("\n%d",list[i]);
        i--;
    } while (i != 0);
}

void show_array(int list[MAX]){
    for (int i = 0; i < MAX; i++)
    {
        printf("\n%d",list[i]);
    }
    
}

void sort_bubble(int list[MAX]){
    int aux;
    for (int i = 0; i < MAX - 1; i++)
    {
        for (int k = i+1 ; k < MAX ; k++)
        {
            if(list[i] > list[k]){
                aux = list[i];
                list[i] = list[k];
                list[k] = aux;
            }
        }
    }
    
}

