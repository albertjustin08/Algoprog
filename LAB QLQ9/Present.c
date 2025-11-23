#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N; 
        scanf("%d", &N);

        int maxScore = 0;
        int count = 0;

        for (int j = 0; j < N; j++) {
            int score;
            scanf("%d", &score);

            if (score > maxScore) {
                maxScore = score;
                count = 1;
            } else if (score == maxScore) {
                count++;
            }
        }

        printf("Case #%d: %d\n", i, count);
    }

    return 0;
}
