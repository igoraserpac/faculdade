#include <stdio.h>

int potencia(int x, int y){
    if(y==0) return 1;
    else return x * potencia(x, y-1);
}

int main(){
    printf("%d\n", potencia(2, 5));
    return 0;
}
