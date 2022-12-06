#include <stdio.h>

void binario(int a){
    if(a == 0 || a == 1) printf("%d", a);
    else{
        binario(a/2);
        printf("%d", a%2);
    }
}

int main(){
    binario(42);
}

