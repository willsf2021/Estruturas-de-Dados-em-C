#include <stdio.h>
#include <locale.h>
#include <string.h>

// Escreva uma função que recebe um ponteiro para array e o tamanho do array,
// e retorna o maior valor do array (sem usar índice, só ponteiro).



int maiorValor(int *pArray, int tamanho){
    int maior = *pArray;

    for(int i = 0; i < tamanho; i ++){
        if(*(pArray + i) > maior){
            maior = *(pArray + i);
        }else {
            continue;
        }
    }
    return maior;
};


int main(){
    setlocale(LC_ALL, "Portuguese");

    int array[5] = {
        -23, -5, -245, -32, -1230
    };

    int *pArray = array;

    int maior = maiorValor(pArray, 5);

    printf("Maior valor: %d", maior);
    
    return 0;
}