#include <stdio.h>

int main() {
    char c;

    scanf("%c", &c);

    printf("'%c' and %d", c, (int) c);

    return 0;
}