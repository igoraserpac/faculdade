#include "matriz.h"

Matriz* cria_matriz(int m, int n){
    Matriz *mat = (Matriz*)malloc(sizeof(Matriz));
    mat->m = m;
    mat->n = n;
    mat->matriz = (double**)malloc(m*sizeof(double*));
    for(int i=0; i<m; i++){
        mat->matriz[i] = (double*)malloc(n*sizeof(double));
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            mat->matriz[i][j] = 0;
        }
    }
    return mat;
}


void multiplicacao_escalar(Matriz* M, double escalar){
    for(int i=0; i<M->m; i++){
        for(int j=0; j<M->n; j++){
            M->matriz[i][j] *= escalar;
        }
    }
}


void multiplicacao(Matriz* M, Matriz* N){
    double prod = 0;
    for(int i=0; i<M->m; i++){
        for(int j=0; j<M->n; j++){
            for(int k=0; k<N->n; k++){
                prod += M->matriz[i][k] * N->matriz[k][j];
            }
            printf("%.1lf ", prod);
            prod = 0;
        }
        printf("\n");
    }
}


void altera_elemento(Matriz* M, int m, int n, double novo_valor){
    M->matriz[m][n] = novo_valor;
}


Matriz* destroi_matriz(Matriz* M){
    for(int i=0; i<M->m; i++){
        free(M->matriz[i]);
    }
    free(M->matriz);
    free(M);
}
