#include <stdio.h>
#include <math.h>

double perimetro(double a, double b, double c);
double area(double a, double b, double c);

int main() {
    double a,b,c;

    printf("Digite os lados do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Perimetro: %.2f\n", perimetro(a, b,c));
    printf("Area: %.2f\n", area(a, b,c));

    return 0;
}

double perimetro(double a, double b, double c) {
    return a + b + c;
}

double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}