#include <stdio.h>

int main() {
    int N;
    float a, b, c;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%f %f %f", &a, &b, &c);
        float media = (a * 2 + b * 3 + c * 5) / 10;
        printf("%.1f\n", media);
    }

    return 0;
}
