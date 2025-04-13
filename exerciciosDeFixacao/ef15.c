#include <stdio.h>
#include <locale.h>
#include <string.h>

// Escreva uma função que recebe um ponteiro para array e o tamanho,
// e retorna quantos números pares existem nesse array.

/*

EXTRA:

Retornar a quantidade de pares E ímpares (com ponteiros). ✔

Criar um novo array só com os pares (dentro da função).

Inverter os elementos pares e ímpares de posição, usando ponteiro.

Soma apenas dos números pares.

Filtrar negativos e positivos, sem usar if no main.

*/

typedef struct {
    int pares;
    int impares;
} ParesEImpares;

ParesEImpares qtdePares(int *pArray, int tamanho) {
    ParesEImpares paresEimpares = {0, 0};
    for (int i = 0; i < tamanho; i++) {
        if (*(pArray + i) % 2 == 0) {
            paresEimpares.pares++;
        } else {
            paresEimpares.impares++;
        }
    }
    return paresEimpares;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int array[5] = {
        23, 5, 245, 32, -1230};

    int *pArray = array;

    ParesEImpares retorno = qtdePares(pArray, 5);

    printf("Quantidade de Pares no Array: %d\n", retorno.pares);
    printf("Quantidade de Impares no Array: %d\n", retorno.impares);

    return 0;
}