#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char texto[51];
    int deslocamento;

    scanf("%d", &n);
    getchar();

    while (n--) {
        fgets(texto, 51, stdin);
        texto[strcspn(texto, "\n")] = '\0';

        scanf("%d", &deslocamento);
        getchar();

        for (int i = 0; i < strlen(texto); i++) {
            texto[i] = ((texto[i] - 'A' - deslocamento + 26) % 26) + 'A';
        }

        printf("%s\n", texto);
    }

    return 0;
}
