#include <stdio.h>
#include <stdlib.h>

int contar_igual (int tmp, int *v, int n)
{
    int i;
    int contador = 1;
    for (i = 0; i < n; i++) {
        if (tmp != i && tmp == v[i]) {
            v[i] = 0;
            contador ++;
        }
    }
    return contador;
}

void contar_numero (int *v, int n)
{
    int contador;
    int tmp;
    int i;
    for (i = 0; i < n; i++) {
        contador = 1;
        tmp = v[i];

        if (v[i] != 0) {
            v[i] = 0;

            contador = contar_igual(tmp, v, n);

            if (contador > 1) {
                printf("%d-%d ", tmp, contador);
            }
        }
    }
    printf("\n");
}


int main()
{
    int n;
    int *v;
    int i;

    scanf("%d", &n);

    v = malloc(sizeof(int) * n);

    if (v == NULL) {
        printf("Memoria insuficiente para alocar 'v'");
        return -1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    contar_numero(v, n);

    free(v);

    return 0;
}
