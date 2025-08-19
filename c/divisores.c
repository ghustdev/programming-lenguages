#include <stdio.h>

int main() 
{
    int number;
    
    scanf("%i", &number);

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%i ", i);
        }
    }
    return 0;
}