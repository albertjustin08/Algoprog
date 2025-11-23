#include <stdio.h>

int T, N, i, j, k, l;
int matrix[3][55][55];
int ans[55][55];
int temp[55][55];

void perkalian_matriks(int a[55][55], int b[55][55]) {
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            ans[i][j] = 0;
            for (k = 0; k < N; k++) {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        scanf("%d", &N);
        for (j = 0; j < 3; j++) {
            for (k = 0; k < N; k++) {
                for (l = 0; l < N; l++) {
                    scanf("%d", &matrix[j][k][l]);
                }
            }
        }

        for (j = 0; j < N; j++) {
            for (k = 0; k < N; k++) {
                ans[j][k] = 0; 
                for (l = 0; l < N; l++) {
                    ans[j][k] += matrix[0][j][l] * matrix[1][l][k];
                }
            }
        }

        for (j = 0; j < N; j++) {
            for (k = 0; k < N; k++) {
                temp[j][k] = ans[j][k];
            }
        }
        printf("Case #%d:\n", i + 1);
        for (j = 0; j < N; j++) {
            for (k = 0; k < N; k++) {
                ans[j][k] = 0; 
                for (l = 0; l < N; l++) {
                    ans[j][k] += temp[j][l] * matrix[2][l][k];
                }
                printf("%d", ans[j][k]);
                if (k < N - 1) {
                    printf(" ");
                } else {
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
