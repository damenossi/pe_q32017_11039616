#include <stdio.h>
#include <stdlib.h>

/** Aqui iremos pegar 10 entradas do usuário(a, b, c, d, e, f, g, h, i, j),
* somar estes números e tirar sua respectiva média.
*/


int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    float soma;
    float media;

    printf("Digite os 10 numeros que serao somados: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);
    scanf("%d", &g);
    scanf("%d", &h);
    scanf("%d", &i);
    scanf("%d", &j);

    soma = a + b + c + d + e + f + g + h + i + j;
    media = soma / 10;

    printf("A soma dos dez numeros se iguala a : %f", soma);
    printf("\nA media dos dez numeros se iguala a : %f", media);
    return 0;
}
