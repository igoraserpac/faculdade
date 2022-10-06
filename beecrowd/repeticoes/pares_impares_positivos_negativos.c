#include <stdio.h>

int main() {

    int par = 0, impar = 0, positivo = 0, negativo = 0, n;
    for(int i = 0; i <=4; i++){
        scanf("%d", &n);
        par += (n % 2) == 0;
        impar += (n % 2) != 0;
        positivo += n > 0;
        negativo += n < 0;
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);
    return 0;
}