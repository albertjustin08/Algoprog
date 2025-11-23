#include <stdio.h>
#include <stdlib.h>

double calculateMean(int arr[], int size) {
    double sum = 0.0;
    int i;
    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

double calculateMedian(int arr[], int size) {
    qsort(arr, size, sizeof(int), compare);

    if (size % 2 != 0) {
        return (double)arr[size / 2];
    } else {
        return (double)(arr[(size - 1) / 2] + arr[size / 2]) / 2.0;
    }
}

int main() {
    int T, t, i;
    scanf("%d", &T);

    for (t = 1; t <= T; ++t) {
        int N;
        scanf("%d", &N);

        int A[N];
        for (i = 0; i < N; ++i) {
            scanf("%d", &A[i]);
        }

        double mean = calculateMean(A, N);
        double median = calculateMedian(A, N);

        printf("Case #%d:\n", t);
        printf("Mean : %.2lf\n", mean);
        printf("Median : %.2lf\n", median);
    }

    return 0;
}
