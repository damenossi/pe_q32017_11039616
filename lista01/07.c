#include <stdio.h>
#include <stdlib.h>

/**
 * Neste programa, iremos entrar com dois numeros inteiros (x e y)
 * e retornar x^y.
 */
int main(){
        int x;
        int y;
        int pot;

        printf("Entre com o valor de x: ");
        scanf("%d",&x);
        printf("Entre com o valor de y: ");
        scanf("%d",&y);
        pot = pow(x, y);
        return pot;

}

