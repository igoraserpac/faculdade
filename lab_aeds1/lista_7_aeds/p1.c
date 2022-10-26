#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n != 0){
        if(n > 10) printf("Maior que 10.\n");
        if(n < -10) printf("Menor que -10.\n");
        scanf("%d", &n);
    }
    return 0;
}