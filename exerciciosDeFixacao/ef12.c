#include <stdio.h>
#include <locale.h>
#include <string.h>

// Some todos os elementos de um array de 5 inteiros usando apenas ponteiros (sem usar o nome do array diretamente na soma).


int main(){
    setlocale(LC_ALL, "Portuguese");

    int array[5] = {
        2, 4, 52, 42, 65
    };

    int *ponteiro = array;

    int somaTotal = 0;

    for(int i = 0; i < 5; i++){

        somaTotal += *(ponteiro + i);

        printf("-----------------------------------------------\n");
        printf("Soma atual dos termos do Array: %d\n", somaTotal);
        printf("-----------------------------------------------\n");
    }

    printf("Soma total dos termos do Array: %d\n", somaTotal);
   
    return 0;
}