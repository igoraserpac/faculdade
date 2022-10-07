#include <stdio.h>

void maior_num(int x, int y, int *maior, int *menor){
    if(x > y){
        *maior = x;
        *menor = y;
    }else{
        *maior = y;
        *menor = x;
    }
}

int main(){
    int n, x, y, maior, menor, soma;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        maior_num(x, y, &maior, &menor);
        soma = 0;
        menor++;
        for(;menor < maior; menor++){
            if(menor % 2 != 0){
                soma += menor;
            }
        }
        printf("%d\n", soma);
    }
    return 0;
}