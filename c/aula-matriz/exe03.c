#include <stdio.h>

int main (int argc, char *argv[]) {

    char *palavras[3]; // Array of 3 strings

    for (int i = 0; i < argc; i++) {
        printf("%d -> %s\n",i, argv[i]);
    }

    return 0;
}