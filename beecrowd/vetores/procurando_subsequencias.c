#include <stdio.h>

void search(char n1[11], char n2[33]){
    int i = 0, j = 0;
    int tem_ssq = 0;
    while(n2[j] != '\0'){
        while(1){
            if(n1[i] == '\0'){
                tem_ssq = 1;
            }
            if(n1[i] == n2[j]){
                printf("n1 i %c %d \n", n1[i], i);
                printf("n2 j %c %d \n", n2[j], j);
                j++;
                i++;
            }else{
                i = 0;
                continue;
            }
        }
        j++;
    }
}

int main(){
    char a[11], b[33];
    scanf("%s", a);
    scanf("%s", b);
    search(a, b);
    return 0;
}