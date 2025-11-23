#include <stdio.h>

void sumLeaves(int* arr, int sizeArr, int idx, int sum){
    int total = arr[idx];
    if (idx * 2 + 1 < sizeArr) {
        sumLeaves(arr, sizeArr, idx * 2 + 1, sum + total);
    } 
    if (idx * 2 + 2 < sizeArr) {
        sumLeaves(arr, sizeArr, idx * 2 + 2, sum + total);
    }
    if (idx * 2 + 1 >= sizeArr) {
        printf("%d\n", sum + total);
    }
}

int main(){
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        int idx = 0, sum = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        printf("Case #%d:\n", i+1);
        sumLeaves(arr, n, idx, sum);
    }
    
}