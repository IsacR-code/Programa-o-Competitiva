#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    int inicio, fim, duracao;
    
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    
    inicio = h1 * 60 + m1;
    fim = h2 * 60 + m2;
    
    if (fim > inicio) {
        duracao = fim - inicio;
    } else {
        duracao = (24 * 60 - inicio) + fim;
    }
    
    int horas = duracao / 60;
    int minutos = duracao % 60;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    
    return 0;
}