#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int vetor[n], menor, posicao;
    scanf("%d", &vetor[0]);
    menor = vetor[0];
    posicao = 0;
    for(int i = 1; i < n; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] < menor){
            menor = vetor[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
    return 0;
}