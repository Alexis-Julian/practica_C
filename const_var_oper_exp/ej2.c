#include <stdio.h>

/* - ¿Cuál o cuáles de las siguientes sentencias son válidas en lenguaje C teniendo en cuenta
que VALOR es una constante simbólica numérica entera?
a. VALOR + = i;  -> # INVALIDA 
b. printf (“%s”, VALOR);-> # INVALIDA
c. ++ VALOR; -> # INVALIDA
d. printf (“%d”, VALOR); -> # VALIDA
e. Ninguna de las anteriores */
#

int main(){
    const VALOR = 1;
    printf("%d",VALOR);
    return 0;
}