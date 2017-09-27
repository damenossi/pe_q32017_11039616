#include <stdio.h>
#include <stdlib.h>

/**
 * Neste programa, iremos entrar com dois numeros inteiros (x e y)
 * e retornar a divisão entre eles.
 */
int main(){
        int x;
        int y;
        int div;

        printf("Entre com o valor de x: ");
        scanf("%d",&x);
        printf("Entre com o valor de y: ");
        scanf("%d",&y);
        div = x / y;
        return div;

}
