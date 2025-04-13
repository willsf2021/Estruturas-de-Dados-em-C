#include <stdio.h>
#include <locale.h>
#include <string.h>

// Crie uma função que recebe um array (via ponteiro) e o tamanho dele, e dobra todos os valores do array original.


void dobrarValorArray(int *pArray, int tamanho){
    for(int i = 0; i < tamanho; i++){
        *(pArray + i) = *(pArray + i) * 2;
    }
};


int main(){
    setlocale(LC_ALL, "Portuguese");

    int array[5] = {
        23, 5, 245, 32, 1230
    };

    int *pArray = array;

    
    printf("Valores antes da chamada da função.\n");
    
    for(int i = 0; i < 5; i++){
        printf("%d\n", *(pArray + i));    
    };
    
    printf("Chamando a funcao...\n");
    dobrarValorArray(pArray, 5);
    
    printf("Valores depois da chamada da função.\n");
    for(int i = 0; i < 5; i++){
        printf("%d\n", *(pArray + i));    
    };    
    
    return 0;
}