#include <stdio.h>

int main() {
    int A,B,C,D;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    printf("Digite o valor de D: ");
    scanf("%d", &D);
    
    if (A>B && A>C && A>D) {
        printf("A é o maior\n");
    } else if (B>A && B>C && B>D) {
        printf("B é o maior\n");
    } else if (C>A && C>B && C>D) {
        printf("C é o maior\n");
    } else {
        printf("D é o maior\n");
    }

    if (A<B && A<C && A<D) {
        printf("A é o menor\n");
    } else if (B<A && B<C && B<D) {
        printf("B é o menor\n");
    } else if (C<A && C<B && C<D) {
        printf("C é o menor\n");
    } else {
        printf("D é o menor\n");
    }

    return 0;
}