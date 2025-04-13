#include <stdio.h>
#include <locale.h>
#include <string.h>

// Crie uma variável int, um ponteiro que aponta pra ela, e um ponteiro para ponteiro. Imprima os valores em cada nível.



int main(){
    setlocale(LC_ALL, "Portuguese");

    int x = 12;

    int *px = &x;
    
    int **p = &px;

    printf("X: %d\n*px: %d\n**p: %d", x, *px, **p);

    return 0;
}