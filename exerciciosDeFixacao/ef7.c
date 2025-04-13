#include <stdio.h>
#include <locale.h>
#include <string.h>

// Dado um array de 5 inteiros, use um ponteiro para imprimir os valores desse array (sem usar o nome do array diretamente no printf).


int main(){
    setlocale(LC_ALL, "Portuguese");

    int array[5] = {
        1, 7, 3, 4, 5
    };


    int *pArray = array;


    for(int i = 0; i < 5; i++){
        printf("%d\n", *(pArray + i));
    }

    return 0;
}