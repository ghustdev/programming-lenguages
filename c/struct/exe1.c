#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define tam 3

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;


int main() {
    srand(time(NULL));

    Data datas[tam];
    int i, j, r_dia, r_mes, r_ano;

    for (i = 0; i < tam; i++) {
        datas[i].dia = rand() % 30 + 1; 
        datas[i].mes = rand() % 12 + 1; 
        datas[i].ano = rand() % 2025 + 1; 
    }

    for (i = 0; i < 3; i++) {
        printf("\n%d / %d / %d\n", datas[i].dia, datas[i].mes, datas[i].ano);
    }

    printf("---------------------");

    for (i = 1; i < tam; i++) {
        Data key_data = datas[i];
        j = i - 1;
        while (j >=0 && datas[j].ano >= key_data.ano) {
            if (datas[j].mes >= datas[i].mes) {
                if (datas[j].dia > datas[i].dia) { 
                    datas[j + 1] = datas[j];
                } else {
                    datas[j + 1] = datas[j];
                }
            } else {
                datas[j + 1] = datas[j];
            }
            j--;
        }
        datas[j + 1] = key_data;
    }
    
    for (i = 0; i < 3; i++) {
        printf("\n%d / %d / %d\n", datas[i].dia, datas[i].mes, datas[i].ano);
    }

    return 0;
}