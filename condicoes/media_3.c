#include <stdio.h>

int main(){
    double n1, n2, n3, n4, exame, media;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    media = ((2 * n1) + (3 * n2) + (4 * n3) + n4) / 10;
    if(media < 5){
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    }else if(media >= 7){
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
    }else{
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        media = (media + exame) / 2;
        if(media >= 5){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", media);
    }
    return 0;
}