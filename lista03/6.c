#include <stdio.h>
#include <stdlib.h>

double mediana (int *v, int n)
{
	int metade = --n / 2;
	if ((n % 2) == 0) {
		return ((v[metade] + v[metade + 1]) / 2);
	} else {
		return v[metade+1];
	}
}

int cmpfune (const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}

int main()
{
    int n;
	int *v;
	int i;

	scanf("%d", &n);

	v = malloc(sizeof(int) * n);

	if (v == NULL) {
        printf("Espaço insuficiente pra alocar 'v'");
        return -1;
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	qsort(v, n, sizeof(int), cmpfune);

	printf("%.2f\n", mediana(v, n));

	return 0;
}
