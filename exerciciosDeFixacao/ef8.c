

#include <stdio.h>
#include <locale.h>
#include <string.h>

//Faça uma função que receba dois ponteiros e retorne o maior dos dois valores apontados.

int maiorValor(int *p1, int *p2){
    if(*p1 > *p2){
        return *p1;
    } else {
        return *p2;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x= 10;
    int y = 12;

    int *p1 = &x;
    int *p2 = &y;

    int maiorVariavel = maiorValor(p1, p2);

    printf("O maior valor eh: %d\n", maiorVariavel);
   
    return 0;
}