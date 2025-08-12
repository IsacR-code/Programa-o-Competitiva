#include <stdio.h>

int main() {
    
    int Km;
    double litros, consumo;
    
    scanf("%d", &Km);
    scanf("%lf", &litros);
    
    consumo = Km/litros;
    
    printf("%.3lf km/l\n", consumo);
    
    return 0;
}