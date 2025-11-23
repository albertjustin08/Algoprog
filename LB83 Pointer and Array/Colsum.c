#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int testCase = 1; testCase <= t; testCase++) {
        int N;
        scanf("%d", &N);
        int table[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &table[i][j]);
            }
        }
        int colSum[N];
        for (int i = 0; i < N; i++) {
            colSum[i] = 0;
            for (int j = 0; j < N; j++) {
                colSum[i] += table[j][i];
            }
        }
        printf("Case #%d: ", testCase);
        for (int i = 0; i < N; i++) {
            printf("%d", colSum[i]);
            if (i < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
