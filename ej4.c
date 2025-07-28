
#include <stdio.h>
/* 4- Decir si las siguientes expresiones son válidas:
a. #define PI 3.141592, NUMERO_E 2.718281
b. #define FIESTA "7 de julio \"San Fermín\""
 */

#define PI 3.14 
#define NUMERO_E 2.71
#define FIESTA "7 de julio \"San Fermín\""

int main(int argc, char const *argv[])
{
    printf("%f",PI);
    printf("%f",NUMERO_E);

    return 0;
}