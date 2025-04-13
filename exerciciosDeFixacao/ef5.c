#include <stdio.h>
#include <locale.h>
#include <string.h>

// Declare uma variável int, imprima o valor dela, o endereço dela com &, e o valor usando um ponteiro.

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x = 14;

    int *p1 = &x;

    printf("Valor pela Variavel x: %d\nEndereco de memoria por &x: %p\nValor por *p1: %d", x, &x, *p1);

    return 0;
}