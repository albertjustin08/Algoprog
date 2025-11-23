#include <stdio.h>

void swap(int* arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        
        for (int j = 0; j < n - 1; j++) {
            for (int k = 0; k < n - j - 1; k++) {
                if (arr[k] > arr[k + 1]) {
                    swap(arr, k, k + 1);
                }
            }
        }
        
        int seat1[n / 2];
        int seat2[n / 2];
        int idx1 = 0;
        int idx2 = 0;
        
        for (int j = 0; j < n / 2; j++) {
            seat1[idx1++] = arr[j];
        }
        
        for (int j = n / 2; j < n; j++) {
            seat2[idx2++] = arr[j];
        }
        
        int max = 0; 

        for (int j = 0; j < idx1 - 1; j++) {
            int diff1 = seat1[j + 1] - seat1[j];
            if (diff1 > max) {
                max = diff1;
            }
        }

        for (int j = 0; j < idx2 - 1; j++) {
            int diff2 = seat2[j + 1] - seat2[j];
            if (diff2 > max) {
                max = diff2;
            }
        }
        
        printf("Case #%d: %d\n", i + 1, max);
    } 
    
    return 0;
}