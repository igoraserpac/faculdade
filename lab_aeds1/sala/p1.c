#include <stdio.h>

double media(double n1, double n2, double n3, char tipo){
    if(tipo == 'A'){
        return (n1 + n2 + n3) / 3;
    }else{
        return ((n1 * 5) + (n2 * 3) + (n3 * 2))/ 10;
    }
}

int main(){
    double n1, n2, n3;
    char tipo;
    scanf("%lf %lf %lf %c", &n1, &n2, &n3, &tipo);
    double M = media(n1, n2, n3, tipo);
    printf("Média: %.2lf\n", M);
}