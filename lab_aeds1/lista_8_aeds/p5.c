#include <stdio.h>

int main(){
    int n;
    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &n);
    double v1[n], v2[n], produto = 0;
    for(int i=0; i<n; i++){
        printf("Informe o %dº valor do vetor 1: ", i+1);
        scanf("%lf", &v1[i]);
        printf("Informe o %dº valor do vetor 2: ", i+1);
        scanf("%lf", &v2[i]);
        produto += v1[i]*v2[i];
    }
    printf("Produto escalar dos vetores: %.1lf\n", produto);
    return 0;
}