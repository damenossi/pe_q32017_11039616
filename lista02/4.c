#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float soma(float x, float y)
{
	return (x + y);
}

float subt(float x, float y)
{
	return (x - y);
}

float mult(float x, float y)
{
	return (x * y);
}

float divisao(float x, float y)
{
	return (x / y);
}

float pot(float x, float y)
{
	float base;
	int i;
	base = x;
	if (y == 0) {
		return 1;
		}
	for (i = 1; y>i; i++) {
		x = x*base;
		}
	return x;
}

int main()
{
	float x, y;
	int operacao;
	scanf("%d %f %f", &operacao, &x, &y);


	switch(operacao)
	{
		case 1:
			printf("%.0f\n", soma(x, y));
			break;
		case 2:
			printf("%.0f\n", subt(x, y));
			break;
		case 3:
			printf("%.0f\n", mult(x, y));
			break;
		case 4:
			printf("%.0f\n", divisao(x,y));
			break;
		case 5:
			printf("%.0f\n", pot(x,y));
			break;
	}
	return 0;
}
