#include <stdio.h>

int main(){
    double raio;
    printf("Digite o raio: ");
    scanf("%lf", &raio);
    printf("Circunferência: %.3lf\n", 2*3.1415*raio);
    return 0;
}