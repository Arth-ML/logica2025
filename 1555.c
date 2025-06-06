#include <stdio.h>
#include <math.h>

int main() {
    int N, x, y;
    scanf("%d", &N);

    while (N--) {
        scanf("%d %d", &x, &y);

        int rafael = (3 * x) * (3 * x) + y * y;
        int beto = 2 * (x * x) + (5 * y) * (5 * y);
        int carlos = -100 * x + y * y * y;

        if (rafael > beto && rafael > carlos) {
            printf("Rafael ganhou\n");
        } else if (beto > rafael && beto > carlos) {
            printf("Beto ganhou\n");
        } else {
            printf("Carlos ganhou\n");
        }
    }

    return 0;
}

