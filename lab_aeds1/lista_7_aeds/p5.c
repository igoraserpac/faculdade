#include <stdio.h>
#include <stdlib.h>

int *cria_inteiro(int n){
    int *p = (int*)malloc(sizeof(int));
    *p = n;
    return p;
}

int main(){
    int n = 5;
    int *p = cria_inteiro(n);
    printf("%d\n", *p);
    free(p);
    return 0;
}
