#include <stdio.h>

int main() {
    int tamanho = 7;
    int vet[tamanho], pos, aux;

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        int menor = vet[i]; 
        for (int j = i + 1; j < tamanho; j++) {
            if (vet[j] < menor) {
                menor = vet[j];
                pos = j;
            }
        }
        aux = vet[i];
        vet[i] = menor;
        vet[pos] = aux;
    }

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}