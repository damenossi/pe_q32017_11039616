#include <stdio.h>

unsigned int numero_digitoTR(unsigned int n, unsigned int base) {
	if ( n == 0 ) {
		return base;
	}
	
	return numero_digitoTR(n/10 , base + 1);
}

unsigned int numero_digito(unsigned int n) {
	return numero_digitoTR(n,0);
}

int main() {
	int n;
	printf("escolha n: ");
	scanf("%d", &n);

	printf("o numero de digitos de n e: ""%d\n", numero_digito(n));
	return 0;
}	
