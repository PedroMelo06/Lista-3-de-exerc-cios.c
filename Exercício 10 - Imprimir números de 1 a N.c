#include <stdio.h>

int main() {
    int N;
    printf("Digite um valor para N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}
