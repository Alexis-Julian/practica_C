/* 94- Dado el siguiente fragmento de programa:
char u, v = ’A’;
char *pu, *pv = &v;
……………….
*pv = v + 1;
u = *pv + 1;
pu = &u;
y suponiendo que el valor asignado a u se almacena en la dirección F8C y el valor asignado
a v se almacena en la dirección F8D, decir:
a) ¿Qué valor es asignado a pv? -> 66
b) ¿Qué valor es representado por *pv? -> B
c) ¿Qué valor es asignado a u? ->C
d) ¿Qué valor es asignado a pu? -> 67
e) ¿Qué valor es representado por *pu?  C
 */

int main(){
    char u, v = 'A';
    char *pu, *pv = &v;

    *pv = v + 1;
    u = *pv + 1;
    pu = &u;
    printf("%c",*pu);
}