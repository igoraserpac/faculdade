#include <stdio.h>

int main(){
    double peso, altura;
    scanf("%lf %lf", &peso, &altura);
    if(altura < 1.2){
        if(peso < 60){
            printf("A\n");
        }else if(peso >= 60 && peso <= 90){
            printf("D\n");
        }else{
            printf("G\n");
        }
    }else if(altura >= 1.2 && altura <= 1.7){
        if(peso < 60){
            printf("B\n");
        }else if(peso >= 60 && peso <= 90){
            printf("E\n");
        }else{
            printf("H\n");
        }
    }else{
        if(peso < 60){
            printf("C\n");
        }else if(peso >= 60 && peso <= 90){
            printf("F\n");
        }else{
            printf("I\n");
        }
    }

    return 0;
}