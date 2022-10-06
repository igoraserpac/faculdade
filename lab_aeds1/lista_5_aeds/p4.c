#include <stdio.h>

int main(){
    int x, y;
    if(&x > &y){
        printf("x: %p\n", &x);
    }else{
        printf("y: %p\n", &y);
    }
    return 0;
}

