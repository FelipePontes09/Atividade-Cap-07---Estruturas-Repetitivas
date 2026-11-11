#include <stdio.h>

int main() {
    int X, Y;

    // Primeira leitura dos números
    printf("Digite dois números:\n");
    scanf("%d %d", &X, &Y);

    // Estrutura de repetição que continua enquanto X for diferente de Y
    while (X != Y) {
        if (X < Y) {
            printf("CRESCENTE!\n");
        } else {
            printf("DECRESCENTE!\n");
        }

        // Leitura dos novos valores para a próxima iteração
        printf("Digite outros dois números:\n");
        scanf("%d %d", &X, &Y);
    }

    return 0;
}