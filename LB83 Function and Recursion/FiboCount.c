#include <stdio.h>

int fiboCalls(int n, int *count) {
    (*count)++;
    if (n <= 1) {
        return n;
    }
    return fiboCalls(n - 1, count) + fiboCalls(n - 2, count);
}

int main() {
    int T;
    scanf("%d", &T);
    int i;
    for (i = 1; i <= T; i++) {
        int n, count = 0;
        scanf("%d", &n);

        int fib = fiboCalls(n, &count);
        printf("Case #%d: %d\n", i, count);
    }

    return 0;
}