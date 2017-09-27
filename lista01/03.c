#include <stdio.h>
#include <stdlib.h>
/**
 * Neste programa, iremos entrar com dois numeros inteiros (x e y)
 * e retornar a subtração entre eles.
 */
int main(){
        int x;
        int y;
        int subt;

        printf("Entre com o valor de x: ");
        scanf("%d",&x);
        printf("Entre com o valor de y: ");
        scanf("%d",&y);
        subt = x - y;
        return subt;

}
