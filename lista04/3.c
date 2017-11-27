#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    char nome[100];
    int ra;
    float p1;
    float p2;
    float p3;
    float media;
} aluno;



int main()
{
    FILE * fr;
    FILE * fw;
    int i;
    aluno a;

    fr = fopen("lista_alunos.txt", "r");
    fw = fopen("media_alunos.txt", "w");

    for (i = 0; i < 50; i++) {
        fscanf(fr, "%s %d %f %f %f", a.nome, &a.ra, &a.p1, &a.p2, &a.p3);
        a.media = (a.p1 + a.p2 + a.p3) / 3.0;
        fprintf(fw, "%s %d %.2f %.2f %.2f %.2f\n", a.nome, a.ra, a.p1, a.p2, a.p3, a.media);

    }

    fclose(fr);
    fclose(fw);

    return 0;
}
