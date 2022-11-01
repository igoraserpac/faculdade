#include <stdio.h>
#include <string.h>

void search(char *comparacao, char *fonte){
    int cont = 0;
    char *save;
    char *ocorrencia = strstr(fonte, comparacao);
    while(ocorrencia != NULL){
        cont++;
        save = ocorrencia;
        ocorrencia += strlen(comparacao);
        ocorrencia = strstr(ocorrencia, comparacao);
    }
    if(cont == 0){
        printf("Nao existe subsequencia\n");
    }else{
        printf("Qtd.Subsequencias: %d\n", cont);
        printf("Pos: %ld\n", save - fonte + 1);
    }
    printf("\n");
}

int main(){
    char comparacao[11], fonte[33];
    int caso = 1;
    scanf("%s", comparacao);
    scanf("%s", fonte);
    while(!feof(stdin)){
        printf("Caso #%d:\n", caso);
        search(comparacao, fonte);
        scanf("%s", comparacao);
        scanf("%s", fonte);
        caso++;
    }
    return 0;
}