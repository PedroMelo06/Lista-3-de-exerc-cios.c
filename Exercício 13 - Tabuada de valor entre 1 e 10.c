#include <stdio.h>

int main() {
    int num;

    do {
        printf("Digite um valor entre 1 e 10: ");
        scanf("%d", &num);
    } while (num < 1 || num > 10);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
