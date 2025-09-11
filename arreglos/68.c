#include <stdio.h>
#include <ctype.h>
#define MAX 10

typedef struct{
    int digit;
    int spacewhite;
} DTO;

void charge_sentence(char sentence[MAX]);
void calculate_sentence(char sentence[MAX],DTO *showdate);



int main(){
    DTO show_date ={0,0};
    char sentence[MAX];
    charge_sentence(sentence);
    calculate_sentence(sentence, &show_date);

    printf("There are %d digits\n", show_date.digit);
    printf("There are %d whitespaces\n", show_date.spacewhite);

    return 0;
}

void charge_sentence(char sentence[MAX]){
    for (int i = 0; i < MAX; i++)
    {  
        printf("\nInsert some letter or digit: ");
        scanf(" %c",&sentence[i]);
    }

}
void calculate_sentence(char sentence[MAX],DTO *show_date){
    
    for (int i = 0; i < MAX; i++)
    {
        if(isdigit((unsigned char)sentence[i])){
            show_date->digit++;
        }else if(isspace((unsigned char)sentence[i])){
            show_date->spacewhite++;
        }
    }
    
}
