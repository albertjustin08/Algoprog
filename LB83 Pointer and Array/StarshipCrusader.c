#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        int Xi[N], Yi[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &Xi[i]);
        }

        for (int i = 0; i < N; i++) {
            scanf("%d", &Yi[i]);
        }

        int failedTests = 0;
        for (int i = 0; i < N; i++) {
            if (Xi[i] < Yi[i]) {
                failedTests++;
            }
        }

        printf("Case #%d: %d\n", t, failedTests);
    }

    return 0;
}
