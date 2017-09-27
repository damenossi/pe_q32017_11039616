#include <stdio.h>
#include <stdlib.h>

/** Neste programa, o usuário terá duas entradas inteiras (valor, opcao),
* a opção só poderá ser 1 ou 2, onde em 1 o valor será convertido de decimal para binário
* e em 2 vice-versa.
*/

int main(){

    int valor;
    int opcao;
    int i;
    int resto;
    int binario;
    int decimal;
    int j;

    decimal = 0;
    j = 0;

    binario = 0;
    i = 1;

    printf("Digite o valor a ser convertido: ");
    scanf("%d",&valor);

    while(opcao != 1 && opcao != 2) {
        printf("Digite 1 para converter de decimal para binario ou 2 para converter de binario para decimal: ");
        scanf("%d",&opcao);
    }

    if(opcao == 1) {
        while(valor != 0){
            resto = valor % 2;
            valor = valor / 2;
            binario = binario + (resto * i);
            i = i * 10;
        }
        printf("Valor convertido: " "%d ", binario);


    }

    else {
        while(valor != 0) {
            resto = valor % 10;
            valor = valor / 10;
            decimal = decimal + ( resto * pow(2,j));
            j = j + 1;
        }
        printf("Valor convertido: " "%d ", decimal);

    }

    return 0;

}
