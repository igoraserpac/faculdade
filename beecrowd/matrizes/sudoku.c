#include <stdio.h>

int confere(int *instancia){
    for(int i=0; i<9; i++){
        if(instancia[i]>9 || instancia[i]<1) return 1;
        for(int j=0; j<i; j++){
            if(instancia[i] == instancia[j]) return 1;
        }
    }
    return 0;
}

int confere_matriz(int matriz[9][9]){
    int linha[9], coluna[9], quadrado[9];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            linha[j] = matriz[i][j];
            coluna[j] = matriz[j][i];
        }
        if(confere(linha) || confere(coluna)) return 1;
    }
    for(int m=0; m<3; m++){
        for(int n=0; n<3; n++){
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    quadrado[(i*3)+j] = matriz[m*3+i][n*3+j];
                }
            }
            if(confere(quadrado)) return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    scanf("%d\n", &n);
    int matriz[9][9];
    for(int i=0; i<n; i++){
        for(int j=0; j<9; j++){
            for(int k=0; k<9; k++){
                scanf("%d ", &matriz[j][k]);
            }
        }
        printf("Instancia %d\n", i+1);
        if(confere_matriz(matriz)) printf("NAO\n\n");
        else printf("SIM\n\n");
    }
    return 0;
}



