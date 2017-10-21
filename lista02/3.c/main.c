#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/** 'n' é o numero de repetições do codigo abaixo. **/

long double pi(int n) {
    int i;
    long double a1, b, t, p, a;
    a = 1.0;
    b = 1.0/(sqrt(2.0));
    t = (1.0/4.0);
    p = 1.0;

    for (i = 0; i<n; i++) {
        a1 = (a + b) / 2.0;
        b = (sqrt(a * b));
        t = t - p * (pow((a - a1), 2.0));
        p = 2.0 * p;
        a = a1;
        }
    return (pow((a + b),2.0) / (4.0 * t));

    }

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.20Lf\n", pi(n));
    return 0;

}
