#include <stdio.h>
#include <string.h>

int main()
{
    printf("Hello, World!\n");

    short age = 19;
    float salary = 23.2332323;
    char gender = 'M';
    char name[50];

    strcpy(name, "Gustavo");

    printf("Age: %i\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Gender: %c\n", gender);
    printf("Name: %s\n", name);
    return 0;
}