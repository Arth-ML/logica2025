#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int n;
    char linha[201];
    int frequencia[26];

    scanf("%d", &n);
    getchar();

    while (n--) {
        fgets(linha, 201, stdin);
        int max_freq = 0;
        memset(frequencia, 0, sizeof(frequencia));

        for (int i = 0; linha[i]; i++) {
            if (isalpha(linha[i])) {
                char c = tolower(linha[i]);
                frequencia[c - 'a']++;
                if (frequencia[c - 'a'] > max_freq) {
                    max_freq = frequencia[c - 'a'];
                }
            }
        }

        for (int i = 0; i < 26; i++) {
            if (frequencia[i] == max_freq) {
                printf("%c", 'a' + i);
            }
        }
        printf("\n");
    }

    return 0;
}
