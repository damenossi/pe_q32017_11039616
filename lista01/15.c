#include <stdio.h>
#include <stdlib.h>

/** Este programa imprimirá todos os numeros divisiveis por 2 entre 100 e um inteiro (n),
* que será a entrada do usuário.
*/

int main() {
    int n;
    int i;

    printf("entre com o valor de n: ");
    scanf("%d", &n);

    printf("os numeros entre 100 e %d que sao divisiveis por 2 sao: ", n);

    for(i = 100; i <= n; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
