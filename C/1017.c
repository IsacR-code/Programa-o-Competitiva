#include <stdio.h>

int main() {
    
    int horas, mediaK, total;
    double litros;
    
    scanf("%d", &horas);
    scanf("%d", &mediaK);
    
    total = horas * mediaK;
    
    litros = total / 12.0;
    
    printf("%.3lf\n", litros);
    
    return 0;
}