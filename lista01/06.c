#include <stdio.h>
#include <stdlib.h>

/**
 * Neste programa, iremos entrar com um numero inteiro (x)
 * e retornar x!(fatorial).
 */
int main(){
    int x;
    int fat;
    int i;

    fat = 1;

    printf("Entre com o valor de x: ");
    scanf("%d",&x);

    for(i = 1; i <= x; i = i + 1) {
        fat = fat * i;
    }

    return fat;
}
