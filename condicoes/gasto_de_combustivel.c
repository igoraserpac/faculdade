#include <stdio.h>

int main(){
    int tempo, velocidade;
    double distancia, gasto;
    scanf("%d %d", &tempo, &velocidade);
    distancia = tempo * velocidade;
    gasto = distancia / 12;
    printf("%.3lf\n", gasto);
    return 0;
}