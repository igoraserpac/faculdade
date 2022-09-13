#include <stdio.h>

int main()
{
    int id1, id2, quant1, quant2;
    double valor1, valor2, total;
    scanf("%d %d %lf", &id1, &quant1, &valor1);
    scanf("%d %d %lf", &id2, &quant2, &valor2);
    total = (quant1 * valor1) + (quant2 * valor2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
