#include <stdio.h>

long long int jojonanciSequence(int n, long long int x, long long int y) {
    if (n == 0) return x;
    else if (n == 1) return y;
    else {
        long long int a, b, result;
        a = x;
        b = y;
        int i;
        for (i = 2; i <= n; i++) {
            result = b - a;
            a = b;
            b = result;
        }
        return result;
    }
}

int main() {
    int T, i;
    scanf("%d", &T);

    for (i = 1; i <= T; i++) {
        int n;
        long long int x, y;
        scanf("%d %lld %lld", &n, &x, &y);

        long long int sequence = jojonanciSequence(n, x, y);
        printf("Case #%d: %lld\n", i, sequence);
    }

    return 0;
}
