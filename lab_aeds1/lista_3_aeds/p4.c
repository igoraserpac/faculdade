#include <stdio.h>

int main(){
    double km, consumo;
    char tipo;
    scanf("%lf %c", &km, &tipo);
    switch (tipo){
    case 'A':
        consumo = km / 12;
        break;
    case 'B':
        consumo = km / 9;
        break;
    case 'C':
        consumo = km / 8;
        break;
    }
    printf("Consumo: %.2lf litros\n", consumo);
    return 0;
}