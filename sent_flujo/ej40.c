#include <stdio.h>

int main(){
    float mayor = 0, menor = 0, aux;
    char opc;
    printf("Bienviendio a calcular medio\n");
    printf("--------Ingrese su primer numero-------\n");
    scanf("%f",&aux);
    menor = aux;

    while(1) 
    {    
       

        if (aux > mayor) mayor = aux;
        if (aux < menor) menor = aux;

        printf("¿Salir? (S/N): ");
        scanf(" %c", &opc);

        if(opc =='S'){
            break;
        }

        printf("\nIngrese su nuevo numero :)\n");
        scanf("%f",&aux);
    };

    printf("\nLa media es %f: ",(mayor + menor)/2);
    printf("\nEl numero mas grande es %f: ",mayor)  ;
    printf("\nEl numero mas chico es %f: ", menor)  ;
}