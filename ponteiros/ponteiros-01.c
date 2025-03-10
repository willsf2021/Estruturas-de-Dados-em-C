#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a = 10;
    int *p1 = NULL;
    int *p2;
    int *p3;


    printf("\n\nValor da variavel A: %d\n\n", a);

    printf("Endereco de memoria NULL: %p\n\n", p1);
    
    printf("Lixo de memoria: %p\n\n", p3);
    
    p1 = &a;
    p2 = p1;
    
    printf("Endereco de memoria de A: %p\n\n", p2);
    
    *p2 = 4;

    printf("Valor de *p2: %d\n\n", *p2);
    printf("Valor da variavel A: %d\n\n", a);
    printf("Endereco do ponteiro p1 e p2: %p ,  %p\n\n", &p1, &p2);
    
    return 0;
}