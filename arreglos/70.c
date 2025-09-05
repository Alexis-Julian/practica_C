/* 70- Leer dos vectores A y B de dimensión 10. Generar un tercer vector C de 10 elementos
donde la componente C[i] sea igual al mínimo valor de A[i] y B[j].
Mostrar los tres vectores.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main_logic(int a[10],int b[10],int c[10]);

void show_array(int alist[10]);

int main(){
    int a[10] = {12, 45, 78, 3, 56, 89, 23, 67, 90, 11};
    int b[10] = {34, 8, 99, 21, 44, 65, 10, 77, 50, 6};
    int c[10];
    main_logic(a,b,c);
    show_array(a);
    printf("\n-------");
    show_array(b);
    printf("\n-------");
    show_array(c);
    
    
}


void main_logic(int a[10],int b[10],int c[10]){
    for (int i = 0; i < 10; i++)
    {
        c[i] = a[i] < b[i] ? a[i] : b[i];
    }
    
}

void show_array(int alist[10]){
    for (int i = 0; i < 10; i++)
    {
        printf("\n %d",alist[i]);
    }
    
}