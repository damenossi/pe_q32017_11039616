#include <stdio.h>
#include <stdlib.h>

void transp (int **matriz)
{
    int i;
    int j;
    int temp;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }
}

int main()
{
    int **matriz;
    int i;
    int j;

    matriz = malloc(sizeof(int *) *3);

    for (i = 0; i < 3; i++) {
        matriz[i] = malloc(sizeof(int) * 3);
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    transp(matriz);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[j][i]);
        }
        printf("%\n");
    }
    return 0;
}
