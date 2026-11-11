#include <stdio.h>

int main() {
    int X, Y, troca, soma = 0;

    printf("Digite dois numeros:\n");
    scanf("%d", &X);
    scanf("%d", &Y);

    // Garante que X seja o menor e Y seja o maior número, caso o usuário digite invertido
    if (X > Y) {
        troca = X;
        X = Y;
        Y = troca;
    }

    // Percorre todos os números entre X e Y (sem incluí-los)
    for (int i = X + 1; i < Y; i++) {
        // Verifica se o número é ímpar (o operador % 2 diferente de 0 pega tanto positivos quanto negativos)
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    printf("SOMA DOS IMPARES = %d\n", soma);

    return 0;
}