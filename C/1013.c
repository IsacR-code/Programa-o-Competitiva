#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    int maior_AB = (a + b + abs(a - b)) / 2;
    
    int maior_final = (maior_AB + c + abs(maior_AB - c)) / 2;
    
    printf("%d eh o maior\n", maior_final);
    
    return 0;
}