#include <stdio.h>

int main(){
    int anos = 0, meses = 0, dias;
    scanf("%d", &dias);
    while(dias >= 365){
        anos++;
        dias -= 365;
    }
    while(dias >= 30){
        meses++;
        dias -= 30;
    }
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}