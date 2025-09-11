#include <stdio.h>
#include <string.h>
int sumar(int a,int b);
int restar(int a,int b);
int multiplicar(int a,int b);
float dividir(int a,int b);


int main(){
    int opc,num1,num2;
    do{

        do
        {
            printf("\n1- SUMAR\n2- RESTAR\n3- MULTIPLICAR\n4- DIVIDIR\n");
            scanf("%d",&opc);
            fflush(stdin);
        } while (!(opc >= 1 && opc <= 4));
        

        printf("\nIngrese los numeros con lo que desea hacer las operaciones\n");
        printf("Ingrese el primero numero: ");
        scanf("%d",&num1);
        fflush(stdin);

        printf("Ingrese el segundo numero: ");
        scanf("%d",&num2);
        fflush(stdin);

        
        switch (opc)
        {
        case 1:
            printf("\nLa suma de sus numeros: %d\n",sumar(num1,num2));
            break;
        case 2:
            printf("\nLa resta de sus numeros: %d\n",restar(num1,num2));
            break;
        case 3:
            printf("\nLa multiplicacion de sus numeros: %d\n",multiplicar(num1,num2));
            break;        
        case 4:
            (num2 == 0)  && printf("La division que esta intentado hacer eso division por cero usted esta loquito?\n"),printf("Ingrese de nuevo sus numeros\n");

            (num2 !=  0) &&  printf("\nLa division de sus numeros: %0.2f\n", dividir(num1,num2));

            break;
        }

    printf("Desea salir del programa S-si N-no");
    }while(!(getchar() == 'S'));
}

int sumar(int a,int b){
    return a+b;
}

int restar(int a,int b){
    return a-b;

}
int multiplicar(int a,int b){
    return a*b;
}

float dividir(int a,int b){
    return (a*1.0)/b;
}