#include <stdio.h>
#include <stdlib.h>

/** Neste programa, o usuário terá duas entradas, uma double (temperatura) e uma int(opcao),
* a opção só poderá ser 1 ou 2, onde em 1 a temperatura será convertida de celsius para kelvin
* e em 2 vice-versa.
*/

int main(){

    double temperatura;
    int opcao;

    printf("Digite a temperatura a ser convertida: ");
    scanf("%lf",&temperatura);

    while(opcao != 1 && opcao != 2) {
        printf("Digite 1 para converter de celsius para kelvin ou 2 para converter de kelvin para celsius: ");
        scanf("%d",&opcao);
    }

    if(opcao == 1) {
        temperatura = temperatura + 273.15;
    }
    else {
        temperatura = temperatura - 273.15;
    }

    printf("Temperatura convertida : " "%lf", temperatura);
    return 0;

}
