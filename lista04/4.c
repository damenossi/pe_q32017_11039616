#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

/* Cálculo sem Bittricks */
ulint f1(ulint x)
{
	int tmp = 1;
	int i;
	for (i = 0; i < BIGNUM/3 ; i++) {
        tmp *= 2;
        if (tmp == x) {
			return 1;
		}
		else {
			return 0;
		}
	}
}



/* Cálculo com Bittricks */
ulint f2(ulint x)
{
  	int tmp = 1;
	int i;
	for (i = 0; i < BIGNUM/3 ; i++) {
        tmp = tmp << i;
        if (tmp & x) {
			return 1;
		}
		else {
			return 0;
		}
	}
}

int main ()
{
  	int i;

  	clock_t tempo_init, tempo_fim;
  	double tempo_gasto;
  	ulint soma = 0;

  	tempo_init = clock();
  	for (i=0; i<BIGNUM/3; i++) {
    		soma += f1(i);
  	}
  	tempo_fim = clock();

  	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

	tempo_init = clock();
  	for (i=0; i<BIGNUM/3; i++) {
    		soma += f2(i);
  	}
  	tempo_fim = clock();

	tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

  	return 0;
}
