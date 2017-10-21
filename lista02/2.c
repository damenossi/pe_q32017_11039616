#include <stdio.h>
#include <stdlib.h>
float volume(float altura, float largura, float comprimento) {
    float volume;
    volume = altura * largura * comprimento;
    return volume;
}
int main() {
    float altura, largura, comprimento;
    printf("Escolha a altura, largura e o comprimento\n");
    scanf("%f %f %f", &altura, &comprimento, &largura);

    printf("%.2f", volume(altura, largura, comprimento));

    return 0;

}
