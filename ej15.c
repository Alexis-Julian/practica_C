/* 15- ¿Qué valor contendrán las variables s y c luego de ejecutarse las secuencias de
asignaciones que se mencionan en cada caso?
a) c = 0; b) c = 0; c) c = 4;
 s = ( ++ c) +1 ; s = c ++ + 1; c* = 2 ;
 R: ________________ R: ________________ R: _______________ */

#include <stdio.h>

int main(){
    int c = 0;
    int s = (++c)+1;
    printf("\n s:%d c:%d - Primera evaluacion",s,c);
    c = 0;
    s = c++ + 1;
    printf("\n s:%d c:%d - Segunda evaluacion",s,c);
    c = 4;
    c = c*2;
    printf("\n c:%d     - Tercera evaluacion",c );

}