#include <stdio.h>

int main() {
    int N;

    do {
        printf("Digite um valor para N (maior que 0): ");
        scanf("%d", &N);
    } while (N <= 0);

    for (int i = 1; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}






