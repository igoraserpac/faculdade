#include <stdio.h>

double calc(double a, double b, char c){
    if(c == '+'){
        return a + b;
    }else if(c == '-'){
        return a - b;
    }else if(c == '*'){
        return a * b;
    }else if(c == '/'){
        return a / b;
    }else{
        return 0;
    }
}


int main(){
    double a, b, r;
    char c;
    scanf("%lf %lf %c", &a, &b, &c);
    r = calc(a, b, c);
    printf("Resultado: %lf\n", r);
    return 0;
}