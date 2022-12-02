#ifndef RELOGIO
#define RELOGIO

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int hora;
    int min;
    int segundo;
} Relogio;

Relogio* cria_relogio(int hora, int min, int seg);

void incrementa_tempo(Relogio* r, int hora, int min, int seg);

void decrementa_tempo(Relogio* r, int hora, int min, int seg);

void exibe_horario(Relogio* r);

Relogio* destroi_relogio(Relogio* r);

#endif