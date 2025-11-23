#include <stdio.h>

int jobonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1 || n == 2 || n == 3) {
        return 1;
    } else if (n % 2 == 0) {
        return jobonacci(n - 1) + jobonacci(n - 2);
    } else {
        return 1;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int result = jobonacci(N);
    printf("%d\n", result);

    return 0;
}
