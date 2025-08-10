#include <stdio.h>

int main() {

    int codigo1, peca1, codigo2, peca2;
    double valor1, valor2, total;

    scanf("%d %d %lf", &codigo1, &peca1, &valor1);
    scanf("%d %d %lf", &codigo2, &peca2, &valor2);

    total = (peca1 * valor1) + (peca2 * valor2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}