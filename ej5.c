#include <stdio.h>

/* 5- Dada la siguiente directiva al preprocesador:
#define CATEDRA "Sintaxis y Semántica de los Lenguajes"

Si escribimos:
 printf ("Bienvenidos a %s !!", CATEDRA);

por pantalla se verá: R: Sintaxis y Sem├íntica de los Lenguajes 
*/

#define CATEDRA "Sintaxis y Semántica de los Lenguajes"
int main()
{
    printf("%s",CATEDRA);
    return 0;
}
