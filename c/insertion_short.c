#include <stdio.h>

int main() {
    
    int vector[5] = {1, 5, 3, 4, 2};
    
    for (int i = 0; i < 5; i++) {
        int key = vector[i];
        int j = i - 1;
        
        while (j >= 0 && vector[j] > key) {
            vector[j + 1] = vector[j];
            j = j - 1;
        }
        
        vector[j + 1] = key;
    }

    printf("Sorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%i ", vector[i]);
    }

    return 0;
}