#include <stdio.h>

double converte_graus(double f){
    double c = (f - 32.0) * (5.0/9.0);
    return c;
}

int main(){
    double f;
    scanf("%lf", &f);
    double c = converte_graus(f);
    printf("%.2lf Graus Celsius\n", c);
    return 0;
}