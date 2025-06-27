#include <stdio.h>
#include <stdbool.h>

bool verificarLinhas(int matriz[9][9]) {
    for (int i = 0; i < 9; i++) {
        int contagem[10] = {0};
        for (int j = 0; j < 9; j++) {
            int num = matriz[i][j];
            if (num < 1 || num > 9 || contagem[num] > 0) {
                return false;
            }
            contagem[num]++;
        }
    }
    return true;
}

bool verificarColunas(int matriz[9][9]) {
    for (int j = 0; j < 9; j++) {
        int contagem[10] = {0};
        for (int i = 0; i < 9; i++) {
            int num = matriz[i][j];
            if (num < 1 || num > 9 || contagem[num] > 0) {
                return false;
            }
            contagem[num]++;
        }
    }
    return true;
}

bool verificarSubmatrizes(int matriz[9][9]) {
    for (int bloco = 0; bloco < 9; bloco++) {
        int contagem[10] = {0};
        int linhaInicio = (bloco / 3) * 3;
        int colunaInicio = (bloco % 3) * 3;
        for (int i = linhaInicio; i < linhaInicio + 3; i++) {
            for (int j = colunaInicio; j < colunaInicio + 3; j++) {
                int num = matriz[i][j];
                if (num < 1 || num > 9 || contagem[num] > 0) {
                    return false;
                }
                contagem[num]++;
            }
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        int matriz[9][9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        bool valido = verificarLinhas(matriz) && verificarColunas(matriz) && verificarSubmatrizes(matriz);

        printf("Instancia %d\n", k);
        printf(valido ? "SIM\n" : "NAO\n");
        printf("\n");
    }

    return 0;
}