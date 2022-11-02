#include <stdio.h>

void zera_negativos(){
    int tam;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam];
    for(int i = 0; i<tam; i++){
        printf("Infome o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
        if(vetor[i]<0){
            vetor[i] = 0;
        }
    }
    for(int i = 0; i<tam-1; i++) printf("%d, ", vetor[i]);
    printf("%d.\n", vetor[tam-1]);
}

int main(){
    zera_negativos();
    return 0;
}