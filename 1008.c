#include <stdio.h>

int main(){
    int number, horas;
    double valorHora, salario;

    scanf("%d", &number);
    scanf("%d", &horas);
    scanf("%lf", &valorHora);

    salario = valorHora * horas;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}
