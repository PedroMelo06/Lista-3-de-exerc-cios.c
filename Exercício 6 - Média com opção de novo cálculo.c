#include <stdio.h>

int main() {
    float nota1, nota2, media;
    char opcao;

    do {
        do {
            printf("Digite a primeira nota (0 a 10): ");
            scanf("%f", &nota1);
        } while (nota1 < 0 || nota1 > 10);

        do {
            printf("Digite a segunda nota (0 a 10): ");
            scanf("%f", &nota2);
        } while (nota2 < 0 || nota2 > 10);

        media = (nota1 + nota2) / 2;
        printf("Media: %.2f\n", media);

        printf("NOVO CALCULO (S/N)? ");
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');

    return 0;
}
