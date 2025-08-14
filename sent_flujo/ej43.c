#include <stdio.h>

int main(){
    float n = 0;
    int positive = 0;
    printf("Insert only number to calculate which are positive or negative (0 is considered positive)");
    for (int i = 0; i < 10; i++)
    {
        printf("\nInsert your number...\n");
        scanf(" %f",&n);
        n >= 0 && positive++;
         
    }
    printf("You insert %d positive number and %d negative number",positive,(10-positive));
    return 0;
    
}