#include <stdio.h>

int menor_valor(int *vetor, int tamanho){
    if(tamanho == 1) return vetor[0];
    else{
        if(vetor[0] < vetor[tamanho-1]) return menor_valor(vetor, tamanho-1);
        return menor_valor(vetor+1, tamanho-1);
    }
}

int main(){
    int vetor[5] = {9, 3, 2, 4, 7};
    printf("%d\n", menor_valor(vetor, 5));
}

