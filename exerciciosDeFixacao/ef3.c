#include <stdio.h>
#include <locale.h>
#include <string.h>

//  Dado um ponteiro para int, imprima o endereço de memória que ele armazena usando %p.

int main(){
    setlocale(LC_ALL, "Portuguese");

    int *p1;
    
    printf("%p", p1);


    return 0;
}