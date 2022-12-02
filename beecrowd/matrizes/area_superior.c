#include <stdio.h>

int main(){
    double soma = 0;
    double m[12][12];
    char operacao;
    scanf("%c\n", &operacao);
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf\n", &m[i][j]);
        }
    }
    for(int i=0; i<5; i++){
        for(int j=i+1; j<(11-i); j++){
            soma += m[i][j];
        }
    }
    if(operacao == 'S') printf("%.1lf\n", soma);
    else printf("%.1lf\n", soma/30);
    return 0;
}