#include <stdio.h>
#include <stdlib.h>

int binomio (int n, int k)
{
	if (k == 0){
		return 1;
	}
	if (k > n){
		return 0;
	}
	return binomio(n-1, k-1) + binomio(n-1, k);
}

int main ()
{
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d\n", binomio(n , k));
	return 0;
}
