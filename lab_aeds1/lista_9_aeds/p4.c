#include "relogio.h"

int main(){
    Relogio *r = cria_relogio(10, 20, 30);
    exibe_horario(r);
    incrementa_tempo(r, 2, 4, 6);
    exibe_horario(r);
    decrementa_tempo(r, 5, 30, 40);
    exibe_horario(r);
    destroi_relogio(r);
}