#include <stdio.h>
#include <stdlib.h>

void inverter(char *string)
{
    int len = 0;
    int half_len;
    int i;
    char temp;

    while (string[len] != '\0') {
        len++;
    }

    len -= 1;
    half_len = len / 2;

    for (i = 0; i<= half_len; i++) {
        temp = string[i];
        string[i] = string[len - i];
        string[len-i] = temp;
    }


}

int main()
{
    char string[255] ;
    fgets(string, 255, stdin ) ;

    inverter(string);

    printf("%s\n", string);

    return 0 ;
}
