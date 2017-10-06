#include <stdio.h>

int Somatr(unsigned int n, unsigned int parcial) {
	if (n==0) {
		return parcial;
	}	
	parcial += n;
	return Somatr(n-1, parcial);
}

int soma(unsigned int n) {
	return Somatr(n,0);
}

int main() {
	unsigned int n;
	printf("escolha um valor para a somatoria: ");
	scanf("%d", &n);

	printf("%d""\n", soma(n));
	return 0;
}
	
	
