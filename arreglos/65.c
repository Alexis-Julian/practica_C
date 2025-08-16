/* 
    65- Escribir un programa que cargue un arreglo bidimensional numérico e indique la fila
    y la columna en la que se encuentra almacenado el número de mayor valor absoluto.
*/

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

#define ROWS 10
#define COLS 10


void charge_numbers(int arreglo[][COLS]);
void show_numbers(int arreglo[][COLS]);
void search_absolute(int arreglo[][COLS],int absolute[3]);


int main(){
    int arreglo[ROWS][COLS];
    int absolute[3] ={0,0,0};
    charge_numbers(arreglo);
    search_absolute(arreglo,absolute);
    printf("Number: %d Row: %d Col: %d",absolute[0],absolute[1],absolute[2]);


}

void show_numbers(int arreglo[][COLS]){
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d",arreglo[i][j]);
        }
        
    }

}

void search_absolute(int arreglo[][COLS],int absolute[3]){

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            (sqrt(pow(arreglo[i][j],2)) > absolute[0]) && (absolute[0]= arreglo[i][j],absolute[1]= i,absolute[2] = j);   
        }
        
    }
}

void charge_numbers(int arreglo[][COLS]){
    srand(time(NULL));
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arreglo[i][j] = rand() % 100000;
        }
        
    }
    
}
