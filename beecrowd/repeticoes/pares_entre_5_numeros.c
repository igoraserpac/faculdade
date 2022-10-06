#include <stdio.h>

int main() {

    int cont = 0, n;
    for(int i = 0; i <= 4; i++){
        scanf("%d", &n);
        if(n % 2 == 0){
            cont++;
        }
    }
    printf("%d valores pares\n", cont);
    return 0;
}