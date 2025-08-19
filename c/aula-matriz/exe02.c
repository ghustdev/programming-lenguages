#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));

    int m, n, i, j, random, maior, row, col;

    scanf("%d %d", &m, &n);

    int matriz[m][n];

    maior = 0;
    if (m > 2 && n > 2) {
        printf("+");
        for (int i = 0; i < n; i++)
            printf("----+");
        printf("\n");

        for (i = 0; i < m; i++) {
            printf("|");
            for (j = 0; j < n; j++) {
                random = rand() % 100;
                matriz[i][j] = random;
                printf(" %2d |",matriz[i][j]);
                if (matriz[i][j] > maior)  {maior = matriz[i][j]; row = i; col = j;}
            }

            printf("\n+");
            for (int i = 0; i < n; i++)
                printf("----+");
            printf("\n");
        }
    }

    printf("%d %d %d\n", maior, row, col);

    return 0;
}