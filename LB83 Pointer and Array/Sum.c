#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%d", &X);
        int arr[X][X];

        for (int i = 0; i < X; i++) {
            for (int j = 0; j < X; j++) {
                scanf("%d", &arr[i][j]);
            }
        }

        int sum[X];
        for (int j = 0; j < X; j++) {
            sum[j] = 0;
            for (int i = 0; i < X; i++) {
                sum[j] += arr[i][j];
            }
        }

        printf("Case #%d:", t);
        for (int j = 0; j < X; j++) {
            printf(" %d", sum[j]);
        }
        printf("\n");
    }

    return 0;
}
