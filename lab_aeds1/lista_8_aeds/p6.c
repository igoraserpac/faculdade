#include <stdio.h>

int main(){
    char s[50];
    printf("Digite uma string: ");
    scanf("%s", s);
    for(int i=0; i<4; i++){
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}