#include <stdio.h>

int eh_primo(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    printf("%d\n", eh_primo(13));
    printf("%d\n", eh_primo(20));
    return 0;
}
