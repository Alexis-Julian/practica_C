/* 46- Realizar un algoritmo que permita ingresar un número correspondiente a los días de una
semana y muestre el nombre del día. Que se permita trabajar hasta que el usuario indique
lo contrario. */
#include <stdio.h>
#include <ctype.h>

int main(){
    int day = 0;
    do{
            printf("\nInsert a number and the program will calculate it for you, it give you a day of week\n");
            scanf("%d",&day);
            
            while (!(day > 0 && day <8)){
                printf("\nDid you enter a number negative or a letter? I'm watching you... Try again\n");
                scanf("%d",&day);
            } 
        
            switch (day)
            {
            case 1:
                printf("\nMonday");
                break;
            
            case 2:
                printf("\nTuesday"); 
                break;
            
            case 3:
                printf("\nWednesday");
                break;
            
            case 4:
                printf("\nThursay");
                break;
            
            case 5:
                printf("\nFriday");
                break;
            
            case 6:   
                printf("\nSaturday");
                break;
            
            case 7:
                printf("\nSunday");
                break;
            }
    }while(toupper(getchar()) == 'Y');
    return 0;
}