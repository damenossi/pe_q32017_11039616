#include <stdio.h>
#include <stdlib.h>

int vogal (char *string)
{
    int i = 0;
    int j;
    int contador = 0;
    char v[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u' };

    while (string[i] != '\0') {
            for (j = 0; j < 10; j++) {
                if (string[i] == v[j]) {
                    contador++;
                }
            }
        i++;
    }
    return contador;
}

int main()
{
    char string[255] ;
    fgets(string, 255, stdin ) ;

    printf("%d\n", vogal(string));

    return 0 ;

}
