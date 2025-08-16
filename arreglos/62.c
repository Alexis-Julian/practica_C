/* 62- Dado el siguiente programa indicar qué resultado se obtiene.
Pág. 14
#include<stdio.h>
main() {
int vec[11]= {1,2,-2,1,3,-1,5,10,-5,2,3}, i, var;
var= i = 0;
while( vec[i] < 10) {
var = var + vec[i];
++i;
}
printf ( “ %d”, var);}
}
R: ______________________________________________________________
 */

#include <stdio.h>
int main() {
    int vec[11]= {1,2,-2,1,3,-1,5,10,-5,2,3}, i, var;
    var= i = 0;
    while( vec[i] < 10) {
    var = var + vec[i];
    ++i;
    }
    printf ("%d", var);
}
