#include <stdio.h>

int main()
{

    int v[5] = {1, 2, 3, 4, 5};
    // tipo, nome[tamanho];

    // Cada Integer ocupa 4 bytes, ou seja, esse Vetor vai ocupar 20 bytes;

    for (int i = 0; i < 5; i++)
    {
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
    }

    printf("&v[5] = %p, v[5] = %d\n", &v[5], v[5]); // Aqui estou acessando um endereço de memória que não pertence ao intervalo do VETOR!
    // TOME CUIDADO!

    return 0;
}