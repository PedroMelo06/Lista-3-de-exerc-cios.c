#include <stdio.h>

int main() {
    int totalMercadorias;
    float valorMercadoria, soma = 0, media;

    printf("Digite o numero total de mercadorias: ");
    scanf("%d", &totalMercadorias);

    for (int i = 0; i < totalMercadorias; i++) {
        printf("Digite o valor da mercadoria %d: ", i + 1);
        scanf("%f", &valorMercadoria);
        soma += valorMercadoria;
    }

    media = soma / totalMercadorias;
    printf("Valor total em estoque: %.2f\n", soma);
    printf("Media de valor das mercadorias: %.2f\n", media);

    return 0;
}
