#include <stdio.h>

int main(){
    char string[50];
    int i, j;
    printf("Digite a string: ");
    fgets(string, 50, stdin);
    printf("Digite dois números: ");
    scanf("%d %d", &i, &j);
    for(; i<=j; i++) printf("%c", string[i]);
    printf("\n");
    return 0;
}