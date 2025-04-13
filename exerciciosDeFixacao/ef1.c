#include <stdio.h>
#include <string.h>
#include <locale.h>

// 1. Declare um ponteiro para um int e uma variável int com valor 10. Faça o ponteiro apontar para a variável e imprima o valor da variável usando o ponteiro.

int main(){

    int *p1;

    int numero1 = 10;

    p1 = &numero1;

    printf("Conteudo da Variavel dado pelo Ponteiro: %d", *p1);

    return 0;
}