#include <stdio.h>

int main() {
    int valor;
    int restante;

    scanf("%d", &valor);

    printf("%d\n", valor);

    restante = valor;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidade_notas;

    for (int i = 0; i < 7; i++) {
     
        quantidade_notas = restante / notas[i];
        
        printf("%d nota(s) de R$ %d,00\n", quantidade_notas, notas[i]);

        restante = restante % notas[i];
    }

    return 0;
}