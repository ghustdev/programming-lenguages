#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n = 0, j, i = 0, resp = 0;
    char **matriz = NULL;
    char nome[50];
    
    do {
        printf("Digite um nome de no máx. 50 letras: ");
        scanf("%s", &nome);

        n++;
        matriz = realloc(matriz, n * sizeof(char *));  
        matriz[i] = malloc(strlen(nome) * sizeof(char));

        strcpy(matriz[i], nome);

        printf("Deseja continuar? [SIM = 0, NAO = 1]: ");
        scanf("%d", &resp);
        i++;
    } while (resp != 1);

    for (i = 0; i < n; i++) {
        printf("Nome [%d]: %s \n", i, matriz[i]);
    }


    free(matriz);

    return 0;
}