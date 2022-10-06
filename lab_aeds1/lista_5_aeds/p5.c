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
    int x, y, maior, menor;
    printf("Digite dois valores:\n");
    scanf("%d %d", &x, &y);
    maior_num(x, y, &maior, &menor);
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}

