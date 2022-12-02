#include <stdio.h>

int main(){
    double matriz[12][12];
    int coluna;
    char operacao;
    scanf("%d\n", &coluna);
    scanf("%c\n", &operacao);
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    double soma = 0;
    for(int i=0; i<12; i++){
        soma += matriz[i][coluna];
    }
    if(operacao == 'S') printf("%.1lf\n", soma);
    else printf("%.1lf\n", soma/12);
    return 0;
}