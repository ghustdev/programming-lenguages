#include <stdio.h>

int conta_c(char *) {
    int i = 10, potencia = 1, resultado;
    if (N % conta_c(N) >= N)
        return 0;
    resultado = N % 10; 
    conta_c(N / 10);
    i *= 10;
        
    return N;
}

int main() {
    char *s;

    scanf("%s", &s);
    printf("%d", conta_c(s));

    return 0;
}