#include <stdio.h>

int main() {
    float valorMercadoria, soma = 0, media;
    int quantidade = 0;
    char opcao;

    do {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valorMercadoria);
        soma += valorMercadoria;
        quantidade++;

        printf("MAIS MERCADORIAS (S/N)? ");
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');

    media = soma / quantidade;
    printf("Valor total em estoque: %.2f\n", soma);
    printf("Media de valor das mercadorias: %.2");
    
    return 0;
}

