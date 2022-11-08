#include <stdio.h>
#include <stdlib.h>

int verifica_vetor(int n, int *v, int tam){
    for(int i = 0; i<tam; i++){
        if(n == v[i]) return 1;
    }
    return 0;
}

int *vetor_sem_repeticao(int *vetor, int t){
    int *novo_vetor = (int*)malloc(t * sizeof(int));
    int j = 0;
    for(int i = 0; i < t; i++){
        if(!verifica_vetor(vetor[i], novo_vetor, t)){
            novo_vetor[j] = vetor[i];
            j++;
        }
    }
    return novo_vetor;
}

int main(){
    int vetor[] = {1, 2, 3, 4, 5, 6, 6, 6, 7, 8, 10, 1, 2};
    int *x = vetor_sem_repeticao(vetor, 13);
    for(int i = 0; i<13; i++){
        printf("%d, ", x[i]);
    }
    printf("\n");
    free(x);
    return 0;
}

