#include <stdio.h>
#include <string.h>
#include <locale.h>

//Crie duas variáveis int com valores diferentes e um ponteiro. Faça o ponteiro apontar para cada uma delas e imprima os valores usando o ponteiro.

int main(){
    setlocale(LC_ALL, "Portuguese");

    int *p1;

    int numero1 = 11;
    int numero2 = 22;

    p1 = &numero1;

    printf("Primeira variavel apontada: %d\n", *p1);
    
    p1 = &numero2;

    printf("Segunda variavel apontada: %d\n", *p1);



}