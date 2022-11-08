#include <stdio.h>
#include <string.h>

int conta_vogais(char *string){
    int cont = 0;
    char vogais[] = "aeiouAEIOU";
    char *ocorrencia = strpbrk(string, vogais);
    while(ocorrencia != NULL){
        cont++;
        ocorrencia++;
        ocorrencia = strpbrk(ocorrencia, vogais);
    }
    return cont;
}

char *troca_vogais(char *string, char c){
    char vogais[] = "aeiouAEIOU";
    char *ocorrencia = strpbrk(string, vogais);
    while(ocorrencia != NULL){
        *ocorrencia = c;
        ocorrencia++;
        ocorrencia = strpbrk(ocorrencia, vogais);
    }
    return string;
}

int main(){
    char string[50];
    printf("Digite uma frase com até 50 caracteres: ");
    fgets(string, 50, stdin);
    char c;
    printf("Digite o caracter para substituir as vogais: ");
    scanf("%c", &c);
    printf("Foram encontradas %d vogais.\n", conta_vogais(string));
    printf("%s", troca_vogais(string, c));
    return 0;
}
