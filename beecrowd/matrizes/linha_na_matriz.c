#include <stdio.h>

int main(){
    double matriz[12][12];
    int linha;
    char operacao;
    scanf("%d", &linha);
    scanf("%c", &operacao);
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    double soma = 0;
    for(int j=0; j<12; j++){
        soma += matriz[linha][j];
    }
    if(operacao == 'S') printf("%.1lf s\n", soma);
    else printf("%.1lf m\n", soma/12);
    return 0;
}