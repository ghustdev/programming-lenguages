#include <stdio.h>

int inverte(int N) {
    int i = 10, potencia = 1, resultado;
    if (N % inverte(N) >= N)
        return 0;
    resultado = N % 10; 
    inverte(N / 10);
    i *= 10;
        
    return N;
}

int main() {
    int N;

    scanf("%d", &N);
    printf("%d", inverte(N));

    return 0;
}