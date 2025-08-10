#include <stdio.h>

int main() {

    int numb, horas;
    double horasPaga, salario;

    scanf("%d", &numb);
    scanf("%d", &horas);
    scanf("%lf", &horasPaga);

    salario = horas * horasPaga;

    printf("NUMBER = %d\n", numb);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}