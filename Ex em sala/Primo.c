#include <stdio.h>

unsigned int primoTR(unsigned int n, unsigned int i, unsigned int contador) {
	if ( i == n || !contador) return contador;

	return primoTR(n, i + 1, (n%i != 0));
}

unsigned int primo(unsigned int n) {
	return primoTR(n, 2, 1);
}

int main() {
	int n;
	printf("escolha n: ");
	scanf("%d", &n);

	if ( n < 2) return 0;
	if (primo(n)) {
		printf("O numero %d e primo\n", n);
	} else {
		printf("o numero %d NAO e primo\n", n);
	}
	return 0;
}
			
	
