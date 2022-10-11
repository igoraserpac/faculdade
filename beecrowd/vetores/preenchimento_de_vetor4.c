#include <stdio.h>

int main(){
    int par[5], impar[5], i_par = 0, i_impar=0, n;
    for(int i = 0; i < 15; i++){
        scanf("%d", &n);
        if(n % 2 == 0){
            par[i_par] = n;
            i_par++;
        }else{
            impar[i_impar] = n;
            i_impar++;
        }
        if(i_par == 5){
            for(int i = 0; i < i_par; i++){
                printf("par[%d] = %d\n", i, par[i]);
            }
            i_par = 0;
        }
        if(i_impar == 5){
            for(int i = 0; i < i_impar; i++){
                printf("impar[%d] = %d\n", i, impar[i]);
            }
            i_impar = 0;
        }
    }
    for(int i = 0; i < i_impar; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for(int i = 0; i < i_par; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }
    return 0;
}