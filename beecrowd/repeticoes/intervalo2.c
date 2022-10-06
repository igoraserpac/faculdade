#include <stdio.h>

int main() {

    int quant, n, in = 0, out = 0;
    scanf("%d", &quant);
    for(int i = 0; i < quant; i++){
        scanf("%d", &n);
        in += (n >= 10 && n <= 20);
        out += (n < 10 || n > 20);
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}