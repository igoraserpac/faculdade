#include <stdio.h>

int main(){
    double salario, aumento_porcentual, aumento_valor;
    printf("Digite o salário: ");
    scanf("%lf", &salario);
    printf("Digite o percentual de aumento: ");
    scanf("%lf", &aumento_porcentual);
    aumento_valor = salario*(aumento_porcentual/100);
    salario += aumento_valor;
    printf("\nAumento: R$ %.2lf\nNovo salário: R$ %.2lf\n", aumento_valor, salario);
    return 0;
}
