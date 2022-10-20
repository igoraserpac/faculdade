#include <stdio.h>

int primos_entre_si(int x, int y){
    for(int i = 2; i <= y; i++){
        if(x % i == 0 && y % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    printf("%d\n", primos_entre_si(27, 32));
    printf("%d\n", primos_entre_si(26, 32));
    return 0;
}
