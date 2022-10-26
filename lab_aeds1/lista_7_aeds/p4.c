#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, soma = 0, quant = 0;
    while(!feof(stdin)){
        scanf("%d %d", &x, &y);
        for(;x <= y; x++){
            soma += x;
            quant++;
        }
        printf("Média: %.1f\n", (float)(soma)/quant);
        soma = 0;
        quant = 0;
    }
    return 0;
}