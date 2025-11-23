#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        int Ai[N], Bi[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &Ai[i]);
        }

        for (int i = 0; i < N; i++) {
            scanf("%d", &Bi[i]);
        }

        printf("Case #%d: ", t);
        for (int i = 0; i < N; i++) {
            int difference = Ai[i] - Bi[i];
            if (i > 0) {
                printf(" ");
            }
            printf("%d", difference);
        }
        printf("\n");
    }

    return 0;
}
