#include <stdio.h>

int divisiveis(){
    int cont = 0;
    for(int i = 1; i <= 1000; i++){
        if(i % 7 == 0){
            cont++;
        }
    }
    return cont;
}

int main(){
    printf("%d\n", divisiveis());
}