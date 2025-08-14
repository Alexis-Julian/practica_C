
/* - Hacer el algoritmo que nos permita introducir un número por teclado y nos informe si es
par o impar.
 */

 #include <stdio.h>
 int main(){
    int a = 0;
    printf("\nInsert a number to calculate if it is even or odd\n");

    scanf("%d",&a);
    
    a%2 == 0 ? printf("Your number is even") : printf("Your number is odd"); 
    
 }