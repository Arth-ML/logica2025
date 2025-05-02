#include <stdio.h>

int main() {
    int N, nota;
    scanf("%d", &N);

    printf("%d\n", N);

    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 7; i++) {
        nota = N / cedulas[i];
        printf("%d nota(s) de R$ %d,00\n", nota, cedulas[i]);
        N %= cedulas[i];
    }

    return 0;
}
