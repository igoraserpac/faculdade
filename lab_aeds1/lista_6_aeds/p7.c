#include <stdio.h>

int eh_primo(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

void decompoe(int n){
    int i = 2;
    printf("%d = 1", n);
    while(i <= n){
        if(eh_primo(i) && n % i == 0){
            printf(" * %d", i);
            n /= i;
        }else{
            i++;
        }
    }
    printf(".\n");
}

int main(){
    decompoe(60);
    return 0;
}