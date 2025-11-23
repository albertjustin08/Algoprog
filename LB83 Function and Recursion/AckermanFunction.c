#include <stdio.h>

int Ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return Ackermann(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return Ackermann(m - 1, Ackermann(m, n - 1));
    }
}

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    if (M < 1 || M > 3 || N < 1 || N > 10) {
        return 1;
    }
    int result = Ackermann(M, N);
    printf("result: %d\n", result);
    return 0;
}
