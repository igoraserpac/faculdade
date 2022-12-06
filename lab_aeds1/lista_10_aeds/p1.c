#include <stdio.h>

int imprime(int n){
    if(n == 1){
        printf("!\n");
        return 1;
    }
    else{
        imprime(n-1);
        for(int i=0; i<n; i++){
            printf("! ");
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int i = imprime(5);
    return 0;
}
