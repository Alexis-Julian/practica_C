#include <stdio.h>
int main(){

    int a ;
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        printf("The weight is %d and price is %d \n",(i),(5/2)*i+50);
    }
    
}