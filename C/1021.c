#include <stdio.h>

int main() {
    
    double N;
    int valor_em_centavos;
    
    scanf("%lf", &N);
    
    valor_em_centavos = N * 100 + 0.5;
    
    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    int i, quantidade;
    
    printf("NOTAS:\n");
    
    for (i = 0; i < 6; i++) {
        quantidade = valor_em_centavos / notas[i];
        printf("%d nota(s) de R$ %.2f\n", quantidade, (double)notas[i] / 100.0);
        valor_em_centavos = valor_em_centavos % notas[i];
    }
    
    printf("MOEDAS:\n");
    
    for (i = 0; i < 6; i++) {
        quantidade = valor_em_centavos / moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", quantidade, (double)moedas[i] / 100.0);
        valor_em_centavos = valor_em_centavos % moedas[i];
    }
    
    return 0;
}