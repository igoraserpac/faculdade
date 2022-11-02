#include <stdio.h>

int main(){
    int a[] = {1, 0, 5, -2, -5, 7};
    int soma = a[0] + a[1] + a[5];
    printf("%d\n", soma);
    a[4] = 100;
    for(int i=0; i<6; i++) printf("%d\n", a[i]);
    return 0;
}