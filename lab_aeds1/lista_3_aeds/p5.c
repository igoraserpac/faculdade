#include <stdio.h>

int main(){
    double salario, faixa1, faixa2, faixa3, faixa4, desconto;
    scanf("%lf", &salario);
    if(salario > 2000){
        faixa4 = salario - 2000;
        faixa3 = 800;
        faixa2 = 600;
        faixa1 = 600;
    }else if(salario > 1200 && salario <= 2000){
        faixa4 = 0;
        faixa3 = salario - 1200;
        faixa2 = 600;
        faixa1 = 600;
    }else if(salario > 600 && salario <= 1200){
        faixa4 = 0;
        faixa3 = 0;
        faixa2 = salario - 600;
        faixa1 = 600;
    }else{
        faixa4 = 0;
        faixa3 = 0;
        faixa2 = 0;
        faixa1 = 600;
    }
    desconto = (faixa2*0.2) + (faixa3*0.25) + (faixa4*0.4);
    printf("Desconto: R$ %.2lf\n", desconto);
    return 0;
}