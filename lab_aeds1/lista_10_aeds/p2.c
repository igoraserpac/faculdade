#include <stdio.h>

void imprime(int n){
    if(n == 1){
        printf("%d\n", n);
    }else{
        imprime(n-1);
        for(int i=n; i>0; i--){
            printf("%d", n);
        }
        printf("\n");
    }
}

int main(){
    imprime(5);
    return 0;
}