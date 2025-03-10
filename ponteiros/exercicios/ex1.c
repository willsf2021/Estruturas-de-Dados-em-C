#include <stdio.h>

int main(){

    int a, b, *p1, *p2;

    a = 4;
    b = 3;
    p1 = &a;
    // p1 é ponteiro de a; contém o endereço de A.

    p2 = p1;
    // p2 agora também contém o endereço de A.

    *p2 = *p1 + 3;
    /* 
    *p2 é o próprio A, ou seja, 4, e *p1 também é 4, ou seja
    Aqui estou somando 3 ao valor de A, 
    agora a= 7;
    */

    b = b * (*p1);
    /* 
    b originalmente vale 3, agora estou multiplicando o 3 por 7, ou seja, 
    b agora vale 21;
    */

    (*p2)++;
    // Operação de incremente em A, a = 8;


    p1 = &b;
    // Atribuição de um novo valor à p1, p1 agora contém o endereço de b;

    printf("%d %d\n", *p1, *p2);
    // Saída: 21, 8
    printf("%d %d\n", a, b);
    // Saída: 8, 21



    return 0;
}