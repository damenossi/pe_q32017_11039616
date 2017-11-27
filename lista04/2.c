#include <stdio.h>
#include <stdlib.h>


typedef struct tempo {
    char sinal;
    int minutos;
    int segundos;
    int decimos;
} tempo;

int tempo_decimal (tempo t)
{
    return (t.decimos + (t.segundos * 100) + (t.minutos * 6000));

}

tempo decimal_tempo (int decimals)
{
    tempo t;
    t.decimos = decimals % 100;
    decimals /= 100;
    t.segundos = decimals % 60;
    decimals /= 60;
    t.minutos = decimals;

    return t;
}

tempo calcular_diferenca (tempo t1, tempo t2)
{
    tempo t3;
    int t1_decimal = tempo_decimal(t1);
    int t2_decimal = tempo_decimal(t2);

    if (t2_decimal > t1_decimal) {
        t3 = decimal_tempo(t2_decimal - t1_decimal);
        t3.sinal = '+';
    }
    else {
        t3 = decimal_tempo(t1_decimal - t2_decimal);
        t3.sinal = '-';
    }

    return t3;
}

int main()
{
    tempo t1, t2, t3;
	t1.sinal = '+';
	t2.sinal = '+';

	scanf("%dm %ds %d", &t1.minutos, &t1.segundos, &t1.decimos);
	scanf("%dm %ds %d", &t2.minutos, &t2.segundos, &t2.decimos);

	t3 = calcular_diferenca(t1, t2);

	if (t3.sinal == '-')
		printf("%c%dm %ds %d\n", t3.sinal, t3.minutos, t3.segundos, t3.decimos);
	else
		printf("%dm %ds %d\n", t3.minutos, t3.segundos, t3.decimos);

	return 0;
}

