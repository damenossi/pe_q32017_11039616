#include <stdio.h>
#include <stdlib.h>

void calcular_primos (int n, int * primos) {
	
	for (int i = 1; i <= n; i++) {
		int primo = 0;
	
	
		for (int a = 1; a <= i; a++) {
			if ( i%a == 0 ) primo++;
		}

		if ( primo == 2 ) primos[i] = 1 ;
		else primos[i] = 0;
	}
	 
}

int soma_primos ( int n, int * primos) {
	int soma = 0;
	
	for (int i  = 1; i <  n; i++) {
		soma += primos[i];
	}
	
	return soma;
}

int main() {
	int n;
	int * primos;
	scanf("%d", &n);

	primos = malloc(n * sizeof(int));

	if( primos == NULL ) {
		printf("Nao ha espaco suficiente na memoria\n");
		return -1;
	}

	calcular_primos(n, primos);

	printf("%d\n", soma_primos(n, primos));

	return 0;
}		
