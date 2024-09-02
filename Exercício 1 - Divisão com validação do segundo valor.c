#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor (diferente de zero): ");
    scanf("%f", &num2);

    while (num2 == 0) {
        printf("O segundo valor não pode ser zero. Digite novamente: ");
        scanf("%f", &num2);
    }

    printf("Resultado da divisao: %.2f\n", num1 / num2);

    return 0;
}
