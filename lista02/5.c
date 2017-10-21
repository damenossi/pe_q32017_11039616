#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
	int i;
	int temp;
	temp = 1;
	for (i = 1; n>=i; i++) {
		temp *= i;
		}
	return temp;
}

int binomial(int n, int k) {
	int denominador;
	denominador = fatorial(k)*fatorial(n-k);
	return fatorial(n)/denominador;
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d\n", binomial(n, k));
	return 0;
}
