#include <stdio.h>

int main() {
	int a = 20;
	int *p1 = &a;
    int **ponteiroDeP1 = &p1;
	

    printf("*p1 = a = %d\n", *p1);

    printf("**ponteiroDeP1 = *p1 = a = %d", **ponteiroDeP1);

	return 0;
	
}