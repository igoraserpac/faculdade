#include <stdio.h>

int main(){
    int id, quant;
    double total;
    scanf("%d %d", &id, &quant);
    if(id == 1){
        total = quant * 4;
    }else if(id == 2){
        total = quant * 4.5;
    }else if(id == 3){
        total = quant * 5;
    }else if(id == 4){
        total = quant * 2;
    }else if(id == 5){
        total = quant * 1.5;
    }
    printf("Total: R$ %.2lf\n", total);
    return 0;
}