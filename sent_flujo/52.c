/* Calcular la media de los números no negativos de una lista de n números ingresados por 
teclado (n se ingresa por teclado) */
#include <stdio.h>

int main (){
    int positive = 0, number, quantity,acum=0;
    do
    {
        printf("\nInsert the quantity: ");
        scanf("%d",&quantity);
    } while (quantity <= 0);

    for (int i = 0; i < quantity; i++)
    {   
        printf("\nInsert a number: ");
        scanf("%d", &number);
        acum+= number;
        (number > 0) && (positive++); 
    }   

    printf("Your calculate is: %f", (acum / (positive * 1.0)));

}



