#include <stdio.h>

double volume(double r){
    double v = (4 * 3.141592 * r * r * r) / 3;
    return v;
}

int main(){
    double r;
    scanf("%lf", &r);
    double v = volume(r);
    printf("Volume = %.2lf cm³\n", v);
    return 0;
}