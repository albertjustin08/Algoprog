#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, M, Q;
        scanf("%d %d %d", &N, &M, &Q);

        int patterns[N][M];
        int friendVisits[Q];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &patterns[i][j]);
            }
        }

        for (int i = 0; i < Q; i++) {
            scanf("%d", &friendVisits[i]);
        }

        int roomStatus[M];
        for (int i = 0; i < M; i++) {
            roomStatus[i] = 0; 
        }

        for (int i = 0; i < Q; i++) {
            int friendIndex = friendVisits[i] - 1;

            for (int j = 0; j < M; j++) {
                if (patterns[friendIndex][j] == 1) {
                    roomStatus[j] = 1 - roomStatus[j];
                }
            }
        }

        printf("Case #%d:\n", t);
        for (int i = 0; i < M; i++) {
            if (roomStatus[i] == 1) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }

    return 0;
}
