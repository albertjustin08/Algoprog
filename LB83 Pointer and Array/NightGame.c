#include <stdio.h>

int main() {
    int T, t, i;
    scanf("%d", &T);

    for (t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        long long int Xi[N];

        for (i = 0; i < N; i++) {
            scanf("%lld", &Xi[i]);
        }

        printf("Case #%d:", t);
        for (i = N - 1; i >= 0; i--) {
            printf(" %lld", Xi[i]);
        }
        printf("\n");
    }

    return 0;
}