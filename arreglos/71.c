/* 71- Leer 20 números enteros positivos. Mostrar el vector tal como fue ingresado y luego
mostrar el vector ordenado en forma decreciente. */


#include <stdlib.h>
#include <stdio.h>

#define MAX 10


void charge_number(int list[MAX]);
void show_number(int list[MAX]);
void sort_bubble(int list[10]);

int main(){
    int list[10];
    charge_number(list);
    show_number(list);  
    sort_bubble(list);   
    show_number(list);  
}


void sort_bubble(int list[10]){
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

void charge_number(int list[MAX]){
    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&list[i]);
    }
    
}


void show_number(int list[MAX]){
    for (int i = 0; i < MAX; i++)
    {
        printf("\n %d",list[i]);
    }
    
}


