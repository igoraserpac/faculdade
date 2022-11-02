#include <stdio.h>
#include <string.h>

void print_tamanho(char *vet, int tamanho){
    for(int i = 0; i < tamanho && vet[i] != '\0'; i++){
        printf("%c", vet[i]);
    }
}


int main(){
    char a[102], b[102], c[102];
    fgets(a, 102, stdin);
    fgets(b, 102, stdin);
    fgets(c, 102, stdin);
    a[strlen(a)-1] = '\0';
    b[strlen(b)-1] = '\0';
    c[strlen(c)-1] = '\0';
    printf("%s%s%s\n", a, b, c);
    printf("%s%s%s\n", b, c, a);
    printf("%s%s%s\n", c, a, b);
    print_tamanho(a, 10);
    print_tamanho(b, 10);
    print_tamanho(c, 10);
    printf("\n");
    return 0;
}