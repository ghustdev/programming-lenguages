#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int A[5];
    int B[5];
    int S[5];

    for (int i = 0; i < 5; i++) {
        A[i] = rand() % 11;
        B[i] = rand() % 11;
        S[i] = A[i] + B[i];
    }

    printf("\nVetor A = ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }

    printf("\nVetor B = ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", B[i]);
    }
    
    printf("\nSoma = ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", S[i]);
    }

    return 0;
}