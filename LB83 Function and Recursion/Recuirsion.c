#include <stdio.h>

int count_multiple_of_3 = 0;

int F(int n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return 2;
    } else {
        if (n % 5 == 0) {
            if (n % 3 == 0) {
                count_multiple_of_3++; 
            }
            return n * 2;
        } else {
            if (n % 3 == 0) {
                count_multiple_of_3++; 
            }
            return F(n - 1) + n + F(n - 2) + (n - 2);
        }
    }
}

int main() {
    int T, N, i;
    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        scanf("%d", &N);

        count_multiple_of_3 = 0;
        int result = F(N);

        printf("Case #%d: %d %d\n", i + 1, result, count_multiple_of_3);
    }

    return 0;
}
