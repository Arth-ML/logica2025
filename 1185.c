#include <stdio.h>

int main() {
    char O;
    double M[12][12], resultado = 0.0;
    int count = 0;

    scanf(" %c", &O);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            resultado += M[i][j];
            count++;
        }
    }

    if (O == 'M') {
        resultado /= count;
    }

    printf("%.1lf\n", resultado);

    return 0;
}