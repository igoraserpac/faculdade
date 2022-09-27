#include <stdio.h>
#include "p5.h"

int main(){
    double c, k, f;
    scanf("%lf %lf %lf", &c, &k, &f);
    printf("%lf Celsius = %lf Kelvin = %lf Fahrenheit\n", c, Celsius_para_Kelvin(c), Celsius_para_Fahrenheit(c));
    printf("%lf Kelvin = %lf Celsius = %lf Fahrenheit\n", k, Kelvin_para_Celsius(k), Kelvin_para_Fahrenheit(k));
    printf("%lf Fahrenheit = %lf Kelvin = %lf Celsius\n", f, Fahrenheit_para_Kelvin(c), Fahrenheit_para_Celsius(c));
    return 0;
}