#include <stdio.h>

void imprime_inteiro(){
    int tam;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam];
    printf("Infome o valor para a posição 0: ");
    scanf("%d", &vetor[0]);
    int maior = vetor[0], posicao = 0;
    for(int i = 1; i<tam; i++){
        printf("Infome o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
        if(vetor[i]>maior){
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("Maior: %d\nPosição: %d\n", maior, posicao);
}

int main(){
    imprime_inteiro();
    return 0;
}