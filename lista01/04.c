#include <stdio.h>
#include <stdlib.h>
/**
 * Neste programa, iremos entrar com dois numeros inteiros (x e y)
 * e retornar a multiplicação entre eles.
 */
int main(){
        int x;
        int y;
        int mult;

        printf("Entre com o valor de x: ");
        scanf("%d",&x);
        printf("Entre com o valor de y: ");
        scanf("%d",&y);
        mult = x * y;
        return mult;

}

