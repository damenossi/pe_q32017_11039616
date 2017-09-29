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
		temp=pow((-1),i)*fatorial(6*i);
		temp*=(13591409+(545140134*i));
		temp/=fatorial(3*i);
		temp/=(pow(fatorial(i),3));
		temp/=pow(640320,(3*i+(1.5)));
		temp2+=temp;		
		}
	temp2*=12;
	pi=1/temp2;

	printf("%lf", pi);
	return pi;

}
