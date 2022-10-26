#include <stdio.h>

int contador(long int n, int k, int cont){
    if(n == 0){
        return ++cont;
    }else if(n < k){
        return cont;
    }else if(n % 10 == k){
        return contador(n/10, k, ++cont);
    }else{
        return contador(n/10, k, cont);
    }
}

int main(){
    printf("%d\n", contador(7620200922, 2, 0));
    return 0;
}