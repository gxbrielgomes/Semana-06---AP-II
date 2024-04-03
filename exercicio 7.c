#include <stdio.h>

void multiplicaMatrizes(int n, int m, int p, int A[n][m], int B[m][p], int C[n][p]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
            for(int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int n = 2, m = 3, p = 2;
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{6, 5}, {4, 3}, {2, 1}};
    int C[2][2];

    multiplicaMatrizes(n, m, p, A, B, C);

    printf("Matriz C (Multiplicação):\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
