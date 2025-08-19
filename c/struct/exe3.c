#include <stdio.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} Vertice;

typedef struct
{
    Vertice A;
    Vertice B;
    Vertice C;
} Triangulo;

#define TAM 2;

float calcula_distancia(Vertice M, Vertice N);
float calcula_perimetro(Triangulo T);

int main()
{
    int i, j;
    float p, maior = 0.0;
    Triangulo maior_tri = {{0, 0}, {0, 0}, {0, 0}}; 
    Triangulo triangulos[] = {{{0, 0}, {4, 0}, {2, 3}},
                            {{5, 0}, {7, 2}, {6, -1}}};

    for (i = 0; i < 2; i++)
    {
        p = calcula_perimetro(triangulos[i]);
        if (p > maior) {
            maior = p;
            maior_tri = triangulos[i];
        }
        printf("%.2f ", p);
    }

    printf("\n{%.1f, %.1f} ", maior_tri.A.x, maior_tri.A.y);
    printf("{%.1f, %.1f} ", maior_tri.B.x, maior_tri.B.y);
    printf("{%.1f, %.1f}", maior_tri.C.x, maior_tri.C.y);
    printf("\n%.2f\n", maior);

    return 0;
}

float calcula_distancia(Vertice M, Vertice N)
{
    return sqrt((M.x - N.x) * (M.x - N.x) + (M.y - N.y) * (M.y - N.y));
}

float calcula_perimetro(Triangulo T)
{
    float AB, AC, BC;
    AB = calcula_distancia(T.A, T.B);
    AC = calcula_distancia(T.A, T.C);
    BC = calcula_distancia(T.B, T.C);
    return AB + BC + BC;
}