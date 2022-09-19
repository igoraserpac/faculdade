#include <stdio.h>

int main(){
    double a, b, c, media;
    printf("Digite 3 números: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    media = (a + b + c) / 3;
    printf("Média: %.2lf\n", media);
    return 0;
}
