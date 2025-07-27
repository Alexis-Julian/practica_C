#include <stdio.h>
int main(){
    int numero;
    scanf("%d", &numero);
    if (numero > 0 )
    {
        printf("Usted ingreso un numero positivo: %d",numero);
    }else
    {
        printf("Usted ingreso un numero negativo: %d",numero);
    }
    
}