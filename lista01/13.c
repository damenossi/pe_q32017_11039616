#include <stdio.h>
#include <stdlib.h>

/** Neste programa, faremos a soma de 1 at� um inteiro (x) escolhido pelo usu�rio.
* Esta soma � conhecida como soma de Gauss.
*/

int main() {
    int x;
    int i;
    int soma;

    soma = 0;

    printf("Escolha o valor ate onde sera realizada a soma de Gauss: ");
    scanf("%d",&x);

    for(i = 1; i <= x; i++) {
        soma = soma + i;
    }


    return soma;

}

