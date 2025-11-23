#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int Ci[N];

    for (int i = 0; i < N; i++){
        scanf("%d", &Ci[i]);
    }

    int Q;
    scanf("%d", &Q);
    int Ai[Q];
    int Bi[Q];

    for (int i = 0; i < Q; i++){
        scanf("%d %d", &Ai[i], &Bi[i]);
        printf("Case #%d:", i+1);

        for (int j = 0; j < N; j++){
            Ci[Ai[i] - 1] = Bi[i];
            printf(" %d", Ci[j]);
        }
        printf("\n");
    }

    return 0;
}

