#include <stdio.h>
#include <stdlib.h>

double** multiplicacao_matrizes(double m[5][5], double n[5][5]){
    double prod = 0;
    double **nova;
    nova = (double**)malloc(5*sizeof(double*));
    for(int i=0; i<5; i++){
        nova[i] = (double*)malloc(5*sizeof(double));
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            for(int k=0; k<5; k++){
                prod += m[i][k]*n[k][j];
            }
            nova[i][j] = prod;
            prod = 0;
        }
    }
    return nova;
}

int main(){
    double m[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%lf", &m[i][j]);
        }
    }
    double n[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%lf", &n[i][j]);
        }
    }
    double **nova;
    nova = multiplicacao_matrizes(m, n);
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%.1lf ", nova[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<5; i++){
        free(nova[i]);
    }
    free(nova);
    return 0;
}