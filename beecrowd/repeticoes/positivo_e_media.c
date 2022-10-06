#include <stdio.h>

int main() {

    double n, soma = 0;
    int cont = 0;
    for(int i = 0; i <=5; i++){
        scanf("%lf", &n);
        if(n > 0){
            cont++;
            soma += n;
        }
    }
    printf("%d valores positivos\n%.1lf\n", cont, soma/cont);
    return 0;
}