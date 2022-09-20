#include <stdio.h>

int main(){
    int a, b, c, menor, meio, maior;
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b && a>=c){
        maior = a;
        if(b>=c){
            meio = b;
            menor = c;
        }else{
            meio = c;
            menor = b;
        }
    }else if(b>a && b>=c){
        maior = b;
        if(a>=c){
            meio = a;
            menor = c;
        }else{
            meio = c;
            menor = a;
        }
    }else if(c>a && c>b){
        maior = c;
        if(b>=a){
            meio = b;
            menor = a;
        }else{
            meio = a;
            menor = b;
        }
    }
    printf("%d %d %d\n", menor, meio, maior);
    return 0;
}