#include <stdio.h>

int main(){
    int n,j = 0;
    printf("Insert number to start: ");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        j++;
        printf("\nVariable from 'FOR' is %d ",j);
    }


    j=0;
    while (j < n)
    {
        j++;    
        printf("\nVariable from 'WHILE' is %d ",j);
    }


    j=0;
    do{
        j++;
        printf("\nVariable from 'DO WHILE' is %d ",j);
    }while(j < n);
 
    
}
