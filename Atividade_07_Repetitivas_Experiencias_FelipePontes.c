#include <stdio.h>

int main() {
    int N, i, qtd;
    int totalCobaias = 0;
    int totalCoelhos = 0;
    int totalRatos = 0;
    int totalSapos = 0;
    char tipo;

    // Solicita a quantidade de casos de teste
    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &N);

    // Loop executado N vezes para ler cada caso de teste
    for (i = 0; i < N; i++) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &qtd);
        
        // Espaço antes de %c para limpar o buffer do teclado (evita erros com o Enter anterior)
        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);

        // Acumula o total geral de cobaias
        totalCobaias += qtd;

        // Acumula de acordo com o tipo de cobaia (aceitando maiúsculas ou minúsculas)
        if (tipo == 'C' || tipo == 'c') {
            totalCoelhos += qtd;
        } else if (tipo == 'R' || tipo == 'r') {
            totalRatos += qtd;
        } else if (tipo == 'S' || tipo == 's') {
            totalSapos += qtd;
        }
    }

    // Calcula os percentuais com segurança usando conversão para float
    float percCoelhos = ((float)totalCoelhos / totalCobaias) * 100;
    float percRatos = ((float)totalRatos / totalCobaias) * 100;
    float percSapos = ((float)totalSapos / totalCobaias) * 100;

    // Exibe o relatório final estruturado exatamente como no exemplo
    printf("\nRELATORIO FINAL:\n");
    printf("Total: %d cobaias\n", totalCobaias);
    printf("Total de coelhos: %d\n", totalCoelhos);
    printf("Total de ratos: %d\n", totalRatos);
    printf("Total de sapos: %d\n", totalSapos);
    printf("Percentual de coelhos: %.2f %%\n", percCoelhos);
    printf("Percentual de ratos: %.2f %%\n", percRatos);
    printf("Percentual de sapos: %.2f %%\n", percSapos);

    return 0;
}