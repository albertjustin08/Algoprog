#include <stdlib.h>
#include <stdio.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    scanf("%d", &N);

    int *numbers = (int *)malloc(N * sizeof(int));

    if (numbers == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;  // Exit with an error code
    }

    int i;

    for (i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    qsort(numbers, N, sizeof(int), compare);

    int maxDiff = numbers[1] - numbers[0];
    for (i = 0; i < N - 1; i++) {
        if ((numbers[i + 1] - numbers[i]) > maxDiff) {
            maxDiff = numbers[i + 1] - numbers[i];
        }
    }

    int temp = 0;
    for (i = 0; i < N - 1; i++) {
        if ((numbers[i + 1] - numbers[i]) == maxDiff) {
            if (temp != 0) {
                printf(" ");
            }
            printf("%d %d", numbers[i], numbers[i + 1]);
            temp = 1;
        }
    }

    printf("\n");

    free(numbers);

    return 0;
}