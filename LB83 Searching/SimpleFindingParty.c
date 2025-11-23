#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
	int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void findNumbers(int arr[], int n, int target, int caseNum) {
    int larger = -1, smaller = -1;
    int found = 0;
    int i;

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            if ((larger == -1 || arr[i + 1] < larger) && i < n - 1 && arr[i + 1] > target) {
                larger = arr[i + 1];
            }
            if ((smaller == -1 || arr[i - 1] > smaller) && i > 0 && arr[i - 1] < target) {
                smaller = arr[i - 1];
            }
        }
    }

    printf("CASE #%d: ", caseNum);
    if (found) {
        if (larger != -1) {
            printf("%d %d\n", target, larger);
        } else {
            printf("%d %d\n", smaller, target);
        }
    } else {
        printf("-1 -1\n");
    }
}

int main() {
    int k, n, i, j, target;
    scanf("%d", &k);

    for (i = 0; i < k; i++) {
        scanf("%d", &n);
        int arr[n];
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        
        bubbleSort(arr, n); 

        scanf("%d", &target);

        findNumbers(arr, n, target, i + 1);
    }

    return 0;
}
