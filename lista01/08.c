#include <stdio.h>
#include <stdlib.h>

/**
 * Neste programa, iremos entrar com um numero inteiro (i)
 * e imprimir a sequência de fibonacci até o i-ésimo termo.
 */
int main(){
    int i;
    int n;
    int f1 = 0;
    int f2 = 1;
    int soma = 0;

    printf("Diga quantos termos tera sua sequencia de fibonnaci: ");
    scanf("%d",&i);

    printf("0 1 ");

    for(n = 0; n < i-2; n++) {
        soma = f2 + f1 ;

        printf("%d ", soma);

        f1 = f2;
        f2 = soma;

    }

    return 0;

}

