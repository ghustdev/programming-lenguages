#include <stdio.h>
#include <string.h>


int main() 
{
    char nome[50];
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu nome: ");
    input_clear(); // Clear the input buffer before using fgets -> it is not aways necessary.
    read_text(nome, sizeof(nome)); // Use the read_text function to read the name

    printf("\nNome: %s\n", nome);
    printf("Idade: %d anos\n", idade);

    for (int i = 0; i < strlen(nome); i++) {
        printf("%d: %c\n",i, nome[i]);
    }

    return 0;
}