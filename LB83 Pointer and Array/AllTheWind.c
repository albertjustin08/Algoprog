#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    long long int sum;

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);
        long long int input[N][N];  

        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                scanf("%lld", &input[j][k]);
            }
        }
        printf("Case #%d:", i + 1);

        for (int j = 0; j < N; j++) {
            sum = 0;
            for (int k = 0; k < N; k++) {
                sum += input[k][j];

            }
            printf(" %lld", sum);
        }
        printf("\n");
    }

    return 0;
}
