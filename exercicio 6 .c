#include <stdio.h>

void somaMatrizes(int n, int m, int A[n][m], int B[n][m], int C[n][m]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int n = 2, m = 3;
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[2][3] = {{6, 5, 4}, {3, 2, 1}};
    int C[2][3];

    somaMatrizes(n, m, A, B, C);

    printf("Matriz C (Soma):\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
