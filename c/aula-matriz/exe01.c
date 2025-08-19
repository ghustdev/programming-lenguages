#include <stdio.h>
#include <string.h>

int main () {

    int i, j;
    char palavras[3][21]; // 20 + 1 for the null terminator
    // char *palavras[3]; // array de 3 ponteiros

    for (i = 0; i < 3; i++) {
        scanf("%s", palavras[i]);
        palavras[i][21] = '\0'; // Ensure null termination
        // fgets(palavras[i], 21, stdin);
        // palavras[i][strcspn(palavras[i], "\n")] = '\0'; // Remove newline character
    }


    printf("%d,", strlen(palavras[0]));
    printf("%d,", strlen(palavras[1]));
    printf("%d\n", strlen(palavras[2]));

    printf("%s,", palavras[0]);
    printf("%s,", palavras[1]);
    printf("%s\n", palavras[2]);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < strlen(palavras[i]) / 2; j++) {
            char temp = palavras[i][j];
            palavras[i][j] = palavras[i][strlen(palavras[i]) - j - 1];
            palavras[i][strlen(palavras[i]) - j - 1] = temp;
        } 
    }

    for (i = 0; i < 3; i++) {
        printf("%s \n", palavras[i]);
    }

    return 0;
}