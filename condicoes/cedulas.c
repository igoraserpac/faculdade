#include <stdio.h>

int main(){
    int valor, cont100 = 0, cont50 = 0, cont20 = 0, cont10 = 0, cont5 = 0, cont2 = 0, cont1 = 0;
    scanf("%d", &valor);
    int safe = valor;
    while(valor >= 100){
        cont100++;
        valor -= 100;
    }
    while(valor >= 50){
        cont50++;
        valor -= 50;
    }
    while(valor >= 20){
        cont20++;
        valor -= 20;
    }
    while(valor >= 10){
        cont10++;
        valor -= 10;
    }
    while(valor >= 5){
        cont5++;
        valor -= 5;
    }
    while(valor >= 2){
        cont2++;
        valor -= 2;
    }
    while(valor >= 1){
        cont1++;
        valor -= 1;
    }
    printf("%d\n", safe);
    printf("%d nota(s) de R$ 100,00\n", cont100);
    printf("%d nota(s) de R$ 50,00\n", cont50);
    printf("%d nota(s) de R$ 20,00\n", cont20);
    printf("%d nota(s) de R$ 10,00\n", cont10);
    printf("%d nota(s) de R$ 5,00\n", cont5);
    printf("%d nota(s) de R$ 2,00\n", cont2);
    printf("%d nota(s) de R$ 1,00\n", cont1);
    return 0;
}