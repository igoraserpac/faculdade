#include <stdio.h>

int main(){
    int a[20];
    for(int i = 19; i >=0; i--){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, a[i]);
    }
    return 0;
}