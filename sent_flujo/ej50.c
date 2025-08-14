/* Codificar en C un programa que muestre los números primos comprendidos entre 0 y 100. */
#include <stdio.h>

int isPrime(int x, int y);

int main(){
    int number = 0;
    printf("Insert your number \n");
    scanf("%d",&number);

    for (int i = 2; i < number; i++)
    {
        int prime= 1;
        for (int k= 2; k < i+1 ;k++){
            prime = isPrime(i,k);
            if(!prime) break;
        }
        
        prime ? printf("\nThe number: %d is prime",i) : printf("\nThe number: %d is not prime",i);  
    }

}

int isPrime(int i , int k){
    if ((i != k) && (i % k == 0)) {
        return 0;
    }
    return 1;
}