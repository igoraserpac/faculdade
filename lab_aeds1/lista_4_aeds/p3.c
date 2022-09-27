#include <stdio.h>

int hora_para_segundos(int h, int m, int s){
    return (h * 3600) + (m * 60) + s;
}

int main(){
    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);
    int total = hora_para_segundos(h, m, s);
    printf("%d segundos\n", total);
    return 0;
}