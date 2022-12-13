#include <stdio.h>
#include <string.h>



int main(int argc, char **argv){
    char buffer[1000];
    FILE *primeiro_arquivo = fopen(argv[1], "r");
    FILE *segundo_arquivo = fopen(argv[2], "r");
    FILE *terceiro_arquivo = fopen("concatenacao.txt", "w");
    while(!feof(primeiro_arquivo)){
        fgets(buffer, 1000, primeiro_arquivo);
        if(buffer[strlen(buffer) -1] != '\n') buffer[strlen(buffer) - 1] = '\n';
        fprintf(terceiro_arquivo, "%s", buffer);
    }
    while(!feof(segundo_arquivo)){
        fgets(buffer, 1000, segundo_arquivo);
        fprintf(terceiro_arquivo, "%s", buffer);
    }
    fclose(primeiro_arquivo);
    fclose(segundo_arquivo);
    fclose(terceiro_arquivo);
    return 0;
}