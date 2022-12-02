#include "matriz.h"

int main(){
    Matriz *mat1 = cria_matriz(5, 5);
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            mat1->matriz[i][j] = i + j;
        }
    }
    Matriz *mat2 = cria_matriz(5, 5);
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            mat2->matriz[i][j] = i*j;
        }
    }
    multiplicacao(mat1, mat2);
    multiplicacao_escalar(mat1, 3);
    printf("\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%.1lf ", mat1->matriz[i][j]);
        }
        printf("\n");
    }
    destroi_matriz(mat1);
    destroi_matriz(mat2);
}