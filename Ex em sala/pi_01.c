#include <stdio.h>
#include <math.h>

/* Função para o cálculo de fatorial. */

	int fatorial (int f) {
		int i;
		int fat;

		fat = 1;
		
		while(f != 0) {
			fat *= f;
			f--;
		}
		return fat;
	}

int main() {
	double pi;
	int k;
	int i;
	double temp;
	double temp2;
	temp2 = 0;

	printf("Escolha k: ");
	scanf("%d", &k);

	for( i = 0; i <= k; i++) {
		temp=fatorial(4*i);
		temp*=(1103+(26390*i));
		temp/=((pow(fatorial(i),4)));
		temp/=pow(396,(4*i));
		temp2+=temp;
		}
	temp2*=2*(sqrt(2))/9801;
	pi=1/temp2;

	printf("%lf", pi);
	return pi;

}
	
			
