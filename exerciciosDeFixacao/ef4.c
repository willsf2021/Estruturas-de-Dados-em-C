#include <stdio.h>
#include <locale.h>
#include <string.h>

//   Crie uma função que receba um ponteiro para int e dobre o valor que ele aponta. Teste isso com uma variável x = 5.

int dobrarValor(int *ponteiro){
    
    *ponteiro = *ponteiro * 2;
    
    return *ponteiro;
};

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x = 5;

    int *p1 = &x;

    int resultado = dobrarValor(p1);

    printf("Resultado: %d", resultado);

    return 0;
}