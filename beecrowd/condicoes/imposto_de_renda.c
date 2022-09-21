#include <stdio.h>

int main(){
    double salario, imposto = 0;
    scanf("%lf", &salario);
    if(salario > 4500){
        salario -= 4500;
        imposto += salario * 0.28;
        imposto += 1500 * 0.18;
        imposto += 1000 * 0.08;
        printf("R$ %.2lf\n", imposto);
    }else if(salario > 3000 && salario <= 4500){
        salario -= 3000;
        imposto += salario * 0.18;
        imposto += 1000 * 0.08;
        printf("R$ %.2lf\n", imposto);
    }else if(salario > 2000 && salario <= 3000){
        salario -= 2000;
        imposto += salario * 0.08;
        printf("R$ %.2lf\n", imposto);
    }else{
        printf("Isento\n");
    }
    return 0;
}