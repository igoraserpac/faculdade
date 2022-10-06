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

int main() {

    int x, y, maior, menor, soma = 0;
    scanf("%d %d", &x, &y);
    maior_num(x, y, &maior, &menor);
    menor++;
    for(;menor < maior; menor++){
        if(menor % 2 != 0){
            soma += menor;
        }
    }
    printf("%d\n", soma);
    return 0;
}