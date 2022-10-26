#include <stdio.h>

int main() {
    short int linha, coluna;
    printf("Informe a linha e coluna da torre: ");
    scanf("%hd %hd", &linha, &coluna);
    printf("     1   2   3   4   5   6   7   8  \n");
    printf("------------------------------------\n");
    for(int i = 1; i <= 8; i++){
        printf(" %d |", i);
        for(int j = 1; j <= 8; j++){
            if(i == linha || j == coluna) printf(" X  ");
            else printf(" -  ");
        }
        printf("\n");
    }
    return 0;
}
