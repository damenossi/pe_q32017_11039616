#include <stdio.h>
#include <stdlib.h>

/** Neste programa, o usuário terá duas entradas, uma double (temperatura) e uma int(opcao),
* a opção só poderá ser 1 ou 2, onde em 1 a temperatura será convertida de celsius para fahrenheit
* e em 2 vice-versa.
*/

int main(){

    double temperatura;
    int opcao;

    printf("Digite a temperatura a ser convertida: ");
    scanf("%lf",&temperatura);

    while(opcao != 1 && opcao != 2) {
        printf("Digite 1 para converter de celsius para fahrenheit ou 2 para converter de fahrenheit para celsius: ");
        scanf("%d",&opcao);
    }

    if(opcao == 1) {
        temperatura = (1.8*temperatura) + 32;
    }
    else {
        temperatura = (temperatura-32) / 1.8;
    }

    printf("Temperatura convertida : " "%lf", temperatura);
    return 0;

}
