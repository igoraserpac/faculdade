#include <stdio.h>
#include <string.h>

int search(char *comparacao, char *fonte){
    int cont = 0;
    char *ocorrencia = strstr(fonte, comparacao);
    while(ocorrencia != NULL){
        cont++;
        ocorrencia += strlen(comparacao);
        ocorrencia = strstr(ocorrencia, comparacao);
    }
    return cont;
}

int main(){
    char s1[50], s2[50];
    scanf("%s %s", s2, s1);
    printf("%d\n", search(s1, s2));
    return 0;
}