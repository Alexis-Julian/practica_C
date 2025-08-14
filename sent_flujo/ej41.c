/* 40- En la expresión for(i=1; i==10; i+=2); cuántas veces se evalúa la condición.
 */
#include <stdio.h>

int main(){
    /* response : The condicion is never execute because "i" never is equal to 10 */
    for (int i = 0; i ==10 ; i++)
    {
        printf("%d",i);
    }
    
}