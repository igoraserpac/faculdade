#include <stdio.h>

int main(int argv, char **argc){
    char buff[1000];
    char produto[50];
    int quantidade;
    double valor;
    FILE *lista_de_compas = fopen(argc[1], "r");
    double total = 0;
    while(!feof(lista_de_compas)){
        fscanf(lista_de_compas, "%s %d %lf", produto, &quantidade, &valor);
        total += (quantidade * valor);
    }
    printf("Total: R$%.2lf\n", total);

}
