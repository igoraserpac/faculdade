#include <stdio.h>

int main(){
    int x[10], n;
    scanf("%d", &n);
    for(int i = 0; i < 10; i++){
        x[i] = n;
        n *= 2;
    }
    for(int i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, x[i]);
    }
    return 0;
}