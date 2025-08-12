#include <stdio.h>
#include <math.h>

int main() {
    
    const int potencia = 3;
    const double pi = 3.14159;
    double volume, raio;
    
    scanf("%lf", &raio);
    
    volume = (4.0/3.0) * pi * pow(raio, potencia);
    
    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
}