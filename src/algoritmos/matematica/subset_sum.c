#include <stdio.h>

int Subset_Sum_PD(int p[], int n, int C) {
    int t[n + 1][C + 1];

    for (int linha = 0; linha <= n; linha++) { t[linha][0] = 1; }
    for (int coluna = 1; coluna <= C; coluna++) { t[0][coluna] = 0; }

    for (int linha = 1; linha <= n; linha++) {
        printf("\nlinha = %d:", linha);
        for (int coluna = 1; coluna <= C; coluna++) {
            printf("\n\tcoluna = %d: ", coluna);
            int s = t[linha - 1][coluna];
            printf("s = %d,  (se %d = 0 e %d <= %d)  ", s, s, p[linha - 1], coluna);
            if (s == 0 && p[linha - 1] <= coluna) {
                s = t[linha - 1][coluna - p[linha - 1]];
                printf("-->  s = %d", s);
            }
            t[linha][coluna] = s;
        }
    }
    printf("\n\n\nTABELA\n");
    for (int i =0; i < C+1; i++) { printf("\t%d", i); } 
    printf("\n");
    for (int i = 0; i < n+1; i++) {
        printf("%d\t", i);
        for (int j = 0; j < C+1; j++) {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    return t[n][C];
}


int main() {
    int C = 5;
    int p[] = {4, 2, 1, 3};
    int n = sizeof(p) / sizeof(p[0]);

    int result = Subset_Sum_PD(p, n, C);

    if (result) { printf("Existe um subconjunto com soma igual a %d.\n", C); } 
    else { printf("Não existe subconjunto com soma igual a %d.\n", C); }

    return 0;
}