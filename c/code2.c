#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
    system("cls");

    srand(time(NULL));

    int random = rand() % 100;
    printf("Random number: %i\n", random);

    return 0;
}