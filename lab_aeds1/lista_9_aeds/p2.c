#include <stdio.h>

double soma_diagonal_superior(double m[5][5]){
    double soma;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i>j) soma += m[i][j];
        }
    }
    return soma;
}

int main(){
    double m[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            m[i][j] = i + j;
        }
    }
    printf("Soma diagonal superior: %lf\n", soma_diagonal_superior(m));
}