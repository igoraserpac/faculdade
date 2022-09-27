#include "p5.h"
#include <stdio.h>

double Celsius_para_Fahrenheit(double c){
    return (1.8 * c) + 32;
}
double Celsius_para_Kelvin(double c){
    return c + 273;
}
double Fahrenheit_para_Celsius(double f){
    return (f - 32) / 1.8;
}
double Fahrenheit_para_Kelvin(double f){
    return ((f - 32) / 1.8) + 273;
}
double Kelvin_para_Celsius(double k){
    return k - 273;
}
double Kelvin_para_Fahrenheit(double k){
    return ((k - 273) * 1.8) + 32;
}
