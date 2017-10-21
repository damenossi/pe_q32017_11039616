#include <stdio.h>
#include <stdlib.h>

unsigned int potencia (unsigned int x, unsigned int y, unsigned int result) {
	if (y == 1) return result * x;

	potencia(x, y - 1, result * x);
}

int main () {
	int x, y;

	scanf("%d %d", &x, &y);

	printf("%d\n", potencia(x, y, 1));

	return 0;
}
