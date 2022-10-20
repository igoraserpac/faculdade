#include <stdio.h>

int main(){
    int n, fat = 1;
    scanf("%d", &n);
    if(n == 0){
        printf("%d\n", 1);
    }else{
        for(; n >= 1; n--){
            fat *= n;
        }
        printf("%d\n", fat);
    }
    return 0;
}