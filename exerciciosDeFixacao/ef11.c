#include <stdio.h>
#include <locale.h>
#include <string.h>

// Dado um array de 6 inteiros, imprima os valores do último até o primeiro usando ponteiro.


int main(){
    setlocale(LC_ALL, "Portuguese");

    int array[6] = {
        2, 4, 52, 42, 65, 1
    };

    int *ponteiro = array;

    for(int i = 5; i >= 0; i--){

        printf("Valor do Array: %d\n", *(ponteiro + i));

    }
   
    return 0;
}