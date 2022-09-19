#include <stdio.h>

int contador(int num){
    int cont = 1;
    if (num<0)
    {
        num = -num;
        cont++;
    }
    for (int i = num; i>=10; i=i/10)
    {
        cont++;
    }
    return cont;
}

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int conta = contador(a);
    int contb = contador(b);
    int contc = contador(c);
    printf("%d %d %d", conta, contb, contc);
    // Parte 1
    printf("A = %d, B = %d, C = %d\n", a, b, c);

    // Parte 2
    printf("A = ");
    for (int i = 10-conta; i>0; i--){
        printf(" ");
    }
    printf("%d, ", a);
    printf("B = ");
    for (int i = 10-contb; i>0; i--){
        printf(" ");
    }
    printf("%d, ", b);
    printf("C = ");
    for (int i = 10-contc; i>0; i--){
        printf(" ");
    }
    printf("%d\n", c);

    // Parte 3
    printf("A = ");
    if (a < 0)
    {
        printf("-");
        for (int i = 10-conta; i>0; i--){
            printf("0");
        }
        printf("%d, ", -a);
    }
    else {
        for (int i = 10-conta; i>0; i--){
            printf("0");
        }
        printf("%d, ", a);
    }
    printf("B = ");
    for (int i = 10-contb; i>0; i--){
        printf("0");
    }
    printf("%d, ", b);
    printf("C = ");
    for (int i = 10-contc; i>0; i--){
        printf("0");
    }
    printf("%d\n", c);

    // Parte 4
    printf("A = %d", a);
    for (int i = 10-conta; i>0; i--){
        printf(" ");
    }
    printf(", ");
    printf("B = %d", b);
    for (int i = 10-contb; i>0; i--){
        printf(" ");
    }
    printf(", ");
    printf("C = %d", c);
    for (int i = 10-contc; i>0; i--){
        printf(" ");
    }
    printf("\n");

    return 0;
}
