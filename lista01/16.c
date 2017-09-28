#include <stdio.h>
#include <stdlib.h>

/** Faremos um programa para calcular o salário de um funcionário no periodo de um mês,
* onde teremos variaveis que determinarão sua função, o numero de dias que este funcionário faltou
* e quantas horas extras ele teve.
*/

int main() {
    int cargo;
    int faltas;
    int horas;
    float salario;
    float descontos;
    float acrescimos;

    descontos = 0;
    acrescimos = 0;

    while(cargo != 1 && cargo != 2 && cargo != 3 && cargo != 4 && cargo != 5 ){
        printf("Digite o numero correspondente ao cargo do funcionario, 1 para Diretor, 2 para Gerente, 3 para Engenheiro, 4 para Tecnico ou 5 para operador: ");
        scanf("%d", &cargo);
    }
    printf("Digite quantas faltas o funcionario teve neste mes: ");
    scanf("%d", &faltas);

    printf("Digite quantas horas extras o funcionario fez: ");
    scanf("%d", &horas);

    switch ( cargo ) {
        case 1:
            salario = 10000;
            printf("Cargo: Diretor\n");
            printf("Numero de faltas: %d\n", faltas);
            printf("Horas extras: %d\n", horas);
            descontos = faltas * 500;
            acrescimos = ( horas * 62.5 ) + 40;
            if( horas > 40 ) {
                acrescimos = ( 40 * 62.5 ) + 40;
                printf("As horas extras estao limitadas a 40 por mes. As horas remanescentes irao para o banco de horas do proximo mes.\n");
            }
            salario = salario - descontos + acrescimos;
            printf("Salario: %f\n", salario);
            break;
        case 2:
            salario = 8000;
            printf("Cargo: Gerente\n");
            printf("Numero de faltas: %d\n", faltas);
            printf("Horas extras: %d\n", horas);
            descontos = faltas * 400;
            acrescimos = ( horas * 50 ) + 40;
            if( horas > 40 ) {
                acrescimos = ( 40 * 50 ) + 40;
                printf("As horas extras estao limitadas a 40 por mes. As horas remanescentes irao para o banco de horas do proximo mes.\n");
            }
            salario = salario - descontos + acrescimos;
            printf("Salario: %f\n", salario);
            break;
        case 3:
            salario = 5000;
            printf("Cargo: Engenheiro\n");
            printf("Numero de faltas: %d\n", faltas);
            printf("Horas extras: %d\n", horas);
            descontos = faltas * 250;
            acrescimos = ( horas * 31.25 ) + 40;
            if( horas > 40 ) {
                acrescimos = ( 40 * 31.25 ) + 40;
                printf("As horas extras estao limitadas a 40 por mes. As horas remanescentes irao para o banco de horas do proximo mes.\n");
            }
            salario = salario - descontos + acrescimos;
            printf("Salario: %f\n", salario);
            break;
        case 4:
            salario = 3000;
            printf("Cargo: Técnico\n");
            printf("Numero de faltas: %d\n", faltas);
            printf("Horas extras: %d\n", horas);
            descontos = faltas * 150;
            acrescimos = ( horas * 18.75 ) + 40;
            if( horas > 40 ) {
                acrescimos = ( 40 * 18.75 ) + 40;
                printf("As horas extras estao limitadas a 40 por mes. As horas remanescentes irao para o banco de horas do proximo mes.\n");
            }
            salario = salario - descontos + acrescimos;
            printf("Salario: %f\n", salario);
            break;
        case 5:
            salario = 2000;
            printf("Cargo: Operador\n");
            printf("Numero de faltas: %d\n", faltas);
            printf("Horas extras: %d\n", horas);
            descontos = faltas * 100;
            acrescimos = ( horas * 12.5 ) + 40;
            if( horas > 40 ) {
                acrescimos = ( 40 * 12.5 ) + 40;
                printf("As horas extras estao limitadas a 40 por mes. As horas remanescentes irao para o banco de horas do proximo mes.\n");
            }
            salario = salario - descontos + acrescimos;
            printf("Salario: %f\n", salario);
            break;
    }

     return 0;
}


