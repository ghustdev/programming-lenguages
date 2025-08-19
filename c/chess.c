#include <stdio.h>

int main()
{
    char positions[8] = {'A','B','C','D','E','F','G','H'};
    int x, y;

    printf("Position x (1 at 8): "); scanf("%i", &x);
    printf("Position y (1 at 8): "); scanf("%i", &y);

    printf("\n   ");
    for (int pos = 0; pos < 8; pos++) {
        printf(" %c ", positions[pos]);
    }
    
    printf("\n   ");
    for (int pos = 0; pos < 10; pos++) {
        printf("──");
    }

    for (int i = 0; i < 8; i++) {
        printf("\n%i │", (8 - i));
        for (int j = 0; j < 8; j++) {
            if ((j+1) == x || (i+1) == y) {
                printf(" o ");
            } else if (((j % 2 == 0) && (i % 2 == 0)) || ((j % 2 != 0) && (i % 2 != 0))) {
                printf(" □ ");
            }
            else {
                printf(" ■ ");
            }
        }
        printf("| %i", (8 - i));
    }
    
    printf("\n   ");
    for (int pos = 0; pos < 10; pos++) {
        printf("──");
    }
    
    printf("\n   ");
    for (int pos = 0; pos < 8; pos++) {
        printf(" %c ", positions[pos]);
    }

    return 0;
}
