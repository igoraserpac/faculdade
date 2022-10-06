#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    for(int i = 0; i < 6;){
        if(n % 2 != 0){
            printf("%d\n", n);
            i++;
        }
        n++;
    }
    return 0;
}