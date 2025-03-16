#include <stdio.h>
#include <locale.h>

// Mostre todos os passos (testes de mesa) do programa baixo e identiquei o que é impresso pelo programa


void func(int *px, int *py){ // Quais são os tipos de parâmetros aqui? São ponteiros que recebem endereços de variáveis do tipo Integer
    px = py; // Aqui estamos atribuindo que, o valor de px é o mesmo valor de py, ou seja, eles armazenam o mesmo endereço!

    // A VARIAVEL ANTES DO = É QUE RECEBE A REFERENCIA DA SEGUNDA, OU SEJA, AS DUAS APONTAM PARA PY!!!!

    *py = (*py) * (*px); 

    // ValorDaVariavel = ValorDaVariavel * Valor da Variavel

    // Aqui dizemos que, conteúdo de py é igual a ele mesmo ao quadrado.

    // Mas porque??
    // Se px = py então eles armazenam o mesmo endereço de memória, 
    // e se *py acesso o conteúdo do variável que tem o endereço quarado por py e px, logo *px também acessa o mesmo conteúdo.


    *px = *px + 2;
    // ValorDaVariavel = ValorDaVariavel * 2;

    // Aqui incrementamos 2 ao valor da variável

    /* 
          | RESUMO DA FUNÇÃO |
        - Recebe dois ponteiros com Parâmetros.
        - Passo 1 - Declara que os dois ponteiros armazenam o mesmo endereço.
        - Passo 2 - Eleva a variável que tem o seu endereço guardado pelos 2 ponteiro ao Quadrado.
        - Passo 3 - Soma 2 ao valor da variável.
    */
}


int main(){
    setlocale(LC_ALL, "Portuguese");

    int x, y; // Inicializando duas variáveis do tipo Integer.

    scanf("%d", &x); // Capturando o valor digitado pelo usuário e armazendo na variável x. Ex. 2
    scanf("%d", &y); // Capturando o valor digitado pelo usuário e armazendo na variável y. Ex. 3

    func(&x, &y);// Chamando a função e passando como parâmetro os 2 endereços de memórias das variáveis x e y.

    // O que a função faz?
    // Passo 1 - Os 2 ponteiros passam a armezar o valor de Y, como no exemplo, 3.
    // Passo 2 - 3², Y agora vale 9;
    // Passo 3 - 9 + 2, Y agora vale 11;

    printf("x = %d, y = %d\n", x, y);
    //Exemplos de entrada: x = 2, y = 3,

    // Resultado esperado = x = 2, y = 11

    return 0;
}

