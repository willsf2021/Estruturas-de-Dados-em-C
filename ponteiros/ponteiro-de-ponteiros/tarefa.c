#include <stdio.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");

    float z = 2.5;

    float *fp;

    fp = &z;

    printf("*&z = %f\n", *&z);
    // Conteúdo do endereço de z
    // Saída = 2.5
    printf("*fp = %f\n", *fp);
    // Conteúdo do endereço contido em fp, que é o endereço de z
    // Saída = 2.5
    printf("**&fp = %f\n", **&fp);
    // Conteúdo do conteúdo do endereço de fp, 
    // fp tem um endereço próprio, e quem armazena esse endereço é um ponteiro de ponteiros
    // De dentro para fora, o que está no endereço de fp?  o endereço de A
    // E o que está dentro do endereço de A? o valor 2.5;
    // Saída = 2.5
    

    if(**&fp == z){
        printf("Você está no caminho certo!");
    }
    return 0;
}