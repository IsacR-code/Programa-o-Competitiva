#include <stdio.h>

int main() {
    double n[3];
    double A, B, C, temp;

    scanf("%lf %lf %lf", &n[0], &n[1], &n[2]);

    if (n[0] < n[1]) {
        temp = n[0];
        n[0] = n[1];
        n[1] = temp;
    }
    if (n[0] < n[2]) {
        temp = n[0];
        n[0] = n[2];
        n[2] = temp;
    }
    if (n[1] < n[2]) {
        temp = n[1];
        n[1] = n[2];
        n[2] = temp;
    }

    A = n[0];
    B = n[1];
    C = n[2];

    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (A * A == B * B + C * C) {
            printf("TRIANGULO RETANGULO\n");
        } else if (A * A > B * B + C * C) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (A == B || B == C) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}