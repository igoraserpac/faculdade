#include <stdio.h>

int main(){
    float n1, n2, n3, n4, exame, media, mediaf;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = ((2 * n1) + (3 * n2) + (4 * n3) + n4) / 10;
    printf("Media: %.1f\n", media);
    if(media>=7){
        printf("Aluno aprovado.\n");
    }else if(media<5){
        printf("Aluno reprovado.\n");
    }else if(media<7 && media>=5){
        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        printf("Nota de exame: %.1f\n", exame);
        mediaf = (media + exame) / 2;
        if(mediaf>=5){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", mediaf);
    }
    return 0;
}