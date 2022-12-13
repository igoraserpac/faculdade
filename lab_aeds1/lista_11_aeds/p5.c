#include <stdio.h>
void imprime_binario(FILE *arquivo, int n){
    if(n <= 1) fprintf(arquivo, "%d", n);
    else{
        imprime_binario(arquivo, n/2);
        fprintf(arquivo, "%d", n%2);
    }
}

int main(){
    FILE *arquivo = fopen("conversao.txt", "w");
    int n;
    scanf("%d", &n);
    while (n>=0){
        imprime_binario(arquivo, n);
        fprintf(arquivo, "\n");
        scanf("%d", &n);
    }
    return 0;
}