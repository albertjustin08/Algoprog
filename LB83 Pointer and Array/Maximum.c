#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);
        int max1 = -1000001; 
        int max2 = -1000001; 
        int vi;
        for (int j = 0; j < N; j++) {
            scanf("%d", &vi);
            if (vi >= max1) {
                max2 = max1;
                max1 = vi;
            } else if (vi > max2) {
                max2 = vi;
            }
        }
        int maxSum = max1 + max2;
        printf("Case #%d: %d\n", i, maxSum);
    }
    return 0;
}
