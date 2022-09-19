#include <stdio.h>

int main()
{
    int dia, mes, ano;
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("%.2d/%.2d/%.2d\n", mes, dia, ano);
    printf("%.2d/%.2d/%.2d\n", ano, mes, dia);
    printf("%.2d-%.2d-%.2d\n", dia, mes, ano);
    return 0;
}
