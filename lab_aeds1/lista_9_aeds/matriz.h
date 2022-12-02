#ifndef MATRIZ
#define MATRIZ

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double **matriz;
    int m;
    int n;
} Matriz;

Matriz* cria_matriz(int m, int n);
void multiplicacao_escalar(Matriz* M, double escalar);
void multiplicacao(Matriz* M, Matriz* N);
void altera_elemento(Matriz* M, int m, int n, double novo_valor);
Matriz* destroi_matriz(Matriz* M);

#endif

