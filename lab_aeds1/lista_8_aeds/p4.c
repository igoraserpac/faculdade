#include <stdio.h>

int verifica_vetor(int n, int *v, int tam){
    for(int i = 0; i<tam; i++){
        if(n == v[i]) return 1;
    }
    return 0;
}

int *vetor_unico(){
    int tam;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);
    int v1[tam], v2[tam];
    int j = 0;
    for(int i = 0; i<tam; i++){
        printf("Infome o valor para a posição %d: ", i);
        scanf("%d", &v1[i]);
        if(!verifica_vetor(v1[i], v2, tam)){
            v2[j] = v1[i];
            j++;
        }
    }
    return v2;
}

int main(){
    int *vetor = vetor_unico();
    printf("%d", *vetor);
    return 0;
}