#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 0, i = 0, j;
    float media, soma = 0, nota;
    float *vetor = NULL;

    do {
        printf("Digite uma nota (negativo para sair): ");
        scanf("%f", &nota);

        if (nota > 0) {
            n++;
            vetor = realloc(vetor, n * sizeof(float));
            vetor[i] = nota;    
        }
        i++;
    } while (nota > 0);

    for (j = 0; j < n; j++) {
        soma += vetor[j];
    }

    media = soma / n;
    printf("A media das notas e: %.2f\n", media);

    free(vetor);

    return 0;
}