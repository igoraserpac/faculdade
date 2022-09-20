#include <stdio.h>

int main(){
    int num_lados;
    double lado, area;
    const double raiz_de_3 = 1.7320508;
    scanf("%d %lf", &num_lados, &lado);
    switch (num_lados){
    case 3:
        printf("TRIANGULO\n");
        area = (raiz_de_3 * (lado * lado)) / 4;
        printf("Área: %.2lf\n", area);
        break;
    case 4:
        printf("QUADRADO\n");
        area = lado * lado;
        printf("Área: %.2lf\n", area);
        break;
    case 5:
        printf("PENTÁGONO\n");
        break;
    default:
        printf("Número de lados inválido!\n");
    }
    return 0;
}