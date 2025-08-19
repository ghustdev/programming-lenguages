#include <stdio.h>

int main() {
    float vet[5], aux;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vet[i]);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
        {
            if (vet[j] >= vet[j + 1]) {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%f ", vet[i]);
    }

    return 0;
}