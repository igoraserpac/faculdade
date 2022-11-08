#include <stdio.h>

int main(){
    char string1[50], string2[50];
    scanf("%s %s", string1, string2);
    for(int i=0; i<50; i++){
        if(string1[i]<string2[i]){
            printf("%s\n%s\n", string1, string2);
            break;
        }else if(string1[i]>string2[i]){
            printf("%s\n%s\n", string2, string1);
            break;
        }
    }
}