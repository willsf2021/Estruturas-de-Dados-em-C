#include <stdio.h>
#include <locale.h>
#include <string.h>

// Escreva um programa que troca o valor de duas variáveis usando uma função com ponteiros.

void trocarValor(int *p1, int *p2){

    int temp;
    temp = *p1;

    *p1 = *p2;

    *p2 = temp;

}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x = 10;
    int y = 30;

    int *p1 = &x;
    int *p2 = &y;

    printf("Antes da troca:\nX: %d\nY: %d\n", x, y);

    trocarValor(p1, p2);

    printf("Depois da troca:\nX: %d\nY: %d\n", x, y);

    return 0;
}