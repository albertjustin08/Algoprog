#include <stdio.h>

long long findNthNumber(long long N) {
    if (N == 1) {
        return 1;
    }
    if (N % 2 == 0) {
        return findNthNumber(N / 2);
    }
    return findNthNumber(N - 1) + findNthNumber(N + 1);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        long long N;
        scanf("%lld", &N);

        long long result = findNthNumber(N);
        printf("Case #%d: %lld\n", i, result);
    }
    return 0;
}