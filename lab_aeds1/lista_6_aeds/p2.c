#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while (n != 12345){
        printf("ACESSO NEGADO\n");
        scanf("%d", &n);
    }
    printf("ACESSO PERMITIDO\n");
    return 0;
}