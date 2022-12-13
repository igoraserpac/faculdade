#include <stdio.h>

int num_vogais_arquivo(char *nome_arq){
    FILE *arquivo = fopen(nome_arq, "r");
    char letra;
    int cont = 0;
    while(!feof(arquivo)){
        letra = fgetc(arquivo);
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'
        || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
            cont++;
    }
    return cont;
}

int main(){
    printf("%d\n", num_vogais_arquivo("primeiro_arquivo.txt"));
}