#include <stdio.h>
#include <stdlib.h>
int par_ou_impar (int x) {
    if (x%2 == 0) {
        return 0;
    } else {
        return 1;
    }
}
int main() {
    int x;
    scanf("%d", &x);
	printf("%d\n", par_ou_impar(x));
	return 0;
}
