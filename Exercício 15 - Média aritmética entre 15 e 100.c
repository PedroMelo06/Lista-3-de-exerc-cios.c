#include <stdio.h>

int main() {
    int soma = 0, quantidade = 0;
    float media;

    for (int i = 15; i <= 100; i++) {
        soma += i;
        quantidade++;
    }

    media = (float)soma / quantidade;
    printf("Media aritmetica: %.2f\n", media);

    return 0;
}
