#include <stdio.h>

char canTransform(int A, int B) {
    while (A != B) {
        if (A > 1) {
            if (A % 2 == 0) {
                A /= 2;
            } else {
                if (A == 1) return 'N';
                A = A * 3 + 1;
            }
        } else {
            return 'N';
        }
    }
    return 'Y';
}

int main() {
    int T, i;
    scanf("%d", &T);

    for (i = 1; i <= T; i++) {
        int A, B;
        scanf("%d %d", &A, &B);

        char result = canTransform(A, B);
        printf("Case #%d: %s\n", i, (result == 'Y') ? "YES" : "NO");
    }

    return 0;
}
