#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool eh_vogal(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    char risada[51];
    scanf("%s", risada);

    char vogais[51];
    int j = 0;

    for (int i = 0; risada[i] != '\0'; i++) {
        if (eh_vogal(risada[i])) {
            vogais[j] = risada[i];
            j++;
        }
    }
    vogais[j] = '\0';

    int len = strlen(vogais);
    bool engracada = true;

    for (int i = 0; i < len / 2; i++) {
        if (vogais[i] != vogais[len - 1 - i]) {
            engracada = false;
            break;
        }
    }

    printf("%s\n", engracada ? "S" : "N");
    return 0;
}