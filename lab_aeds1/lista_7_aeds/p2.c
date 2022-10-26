#include <stdio.h>

int main(){
    int n, prod = 1;
    scanf("%d", &n);
    while(n != 0){
        prod *= n;
        scanf("%d", &n);
    }
    printf("Produto: %d\n", prod);
    return 0;
}