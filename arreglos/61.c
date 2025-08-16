/* 61- Dado el siguiente programa indicar qué resultado se obtiene.
include<stdio.h>
main() {
int vec[8]= {1,2,-2,1,3,-1,5,10}, i, var;
var= i = 0;
do{ var = var + vec[i];
 ++i;
} while (vec[i] >0);
printf ( “ %d”, var);
}
R: ______________________________________________________________
 */

#include <stdio.h>
int main() {
    int vec[8]= {1,2,-2,1,3,-1,5,10}, i, var;
    var= i = 0;
    do{ var = var + vec[i];
    ++i;
    } while (vec[i] >0);
    printf ( " %d", var);
}