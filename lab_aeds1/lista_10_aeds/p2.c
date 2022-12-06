#include <stdio.h>

void imprime(int i, int n){
    if(i == n){
        for(int j=0; j<n; j++){
            printf("*");
        }
        printf("\n");
    }else{
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
        imprime(i+1, n);
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    imprime(1, 5);
    return 0;
}