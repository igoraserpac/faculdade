#include <stdio.h>

int main(int argc, char **argv){
    FILE *f = fopen(argv[1], "r");
    int cont = 0;
    char n[50];
    while(!feof(f)){
        fgets(n, 50, f);
        cont++;
    }
    printf("%d\n", cont);
    return 0;
}


