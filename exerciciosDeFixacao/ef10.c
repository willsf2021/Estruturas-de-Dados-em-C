#include <stdio.h>
#include <locale.h>
#include <string.h>

//  Tente alterar o valor de uma variável dentro de uma função sem usar ponteiros, e depois com ponteiros. Veja a diferença.

int alterarValorSemPonteiro(int n){
    n = 2;
    return n;
}

void alterarValorComPonteiro(int *n){
    *n = 2;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x = 1;

    printf("X Original antes da Chamada: %d\n", x);
    
    int xAlterado = alterarValorSemPonteiro(x);
    
    printf("X retornado da Funcao: %d\n", xAlterado);
    printf("X Original depois da Chamada: %d\n", x);
    
    // Agora vamos alterar o valor com ponteiro;
    
    int *px = &x;
    
    alterarValorComPonteiro(px);
    
    printf("X Original depois da Chamada COM PONTEIRO: %d\n", x);

    return 0;
}