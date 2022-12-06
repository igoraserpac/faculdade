#include <stdio.h>

int mdc(int a, int b){
    if(b == 0) return a;
    else return mdc(b, a%b);
}

int main(){
	printf("MDC = %d\n", mdc(1272, 4032));
	return 0;
}
