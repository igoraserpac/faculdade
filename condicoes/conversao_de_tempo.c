#include <stdio.h>

int main(){
    int horas, minutos, segundos;
    scanf("%d", &segundos);
    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundos = segundos % 60;
    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}