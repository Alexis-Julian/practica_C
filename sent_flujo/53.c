/* 53- Dados  3 números  donde  el  primero  y  el último  son límites de un  intervalo,  indicar  si  el 
tercero pertenece a dicho intervalo.  */

#include <stdio.h>
int main()
{
    int a,b,c;

    printf("\nInsert your first number of interval: ");
    scanf("%d",&a);
    printf("\nInsert your second number of interval: ");
    scanf("%d",&b);
    printf("\nInsert your thirst number of interval: ");
    scanf("%d",&c);

    if(c >= a && c<= b){
        printf("\nThe number belongs to the interval");
    }



    return 0;
}
