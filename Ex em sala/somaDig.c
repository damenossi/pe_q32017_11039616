#include <stdio.h>

unsigned int somaTR(unsigned int n, unsigned int base) {
	if ( n == 0 ) {
		return base;
	}
	return somaTR(n/10, base + (n%10));
}

unsigned int soma(unsigned int n) {
	return somaTR(n,0);
}

int main() {
	int n;
	printf("escolha n: ");
	scanf("%d", &n);

	printf("a soma dos de digitos de n e: %d\n", soma(n));
	return 0;
}	
