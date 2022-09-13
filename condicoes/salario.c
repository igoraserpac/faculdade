#include <stdio.h>

int main()
{
    int num, horas;
    double valor, salario;
    scanf("%d %d %lf", &num, &horas, &valor);
    salario = valor * horas;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}
