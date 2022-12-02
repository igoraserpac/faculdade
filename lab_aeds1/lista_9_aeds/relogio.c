#include "relogio.h"

Relogio* cria_relogio(int hora, int min, int seg){
    Relogio *r = (Relogio*)malloc(sizeof(Relogio));
    r->hora = hora;
    r->min = min;
    r->segundo = seg;
    return r;
}

void incrementa_tempo(Relogio* r, int hora, int min, int seg){
    r->segundo += seg;
    r->min += r->segundo/60;
    r->segundo = r->segundo%60;
    r->min += min;
    r->hora += r->min/60;
    r->min = r->min%60;
    r->hora += hora;
    if(r->hora >=24){
        r->hora = 0;
        r->min = 0;
        r->segundo = 0;
        printf("Erro! Limite de tempo excedido.\n");
    }
}


void decrementa_tempo(Relogio* r, int hora, int min, int seg){
    int cont = 0;
    r->segundo -= seg;
    while(r->segundo < 0){
        cont++;
        r->segundo += 60;
    }
    r->min -= cont;
    cont = 0;
    r->min -= min;
    while(r->min < 0){
        cont++;
        r->min += 60;
    }
    r->hora -= cont;
    r->hora -= hora;
    if(r->hora < 0){
        r->hora = 0;
        r->min = 0;
        r->segundo = 0;
        printf("Erro! Limite de tempo excedido.\n");
    }
}

void exibe_horario(Relogio* r){
    printf("%d:%d:%d\n", r->hora, r->min, r->segundo);
}

Relogio* destroi_relogio(Relogio* r){
    free(r);
}