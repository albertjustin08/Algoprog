#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sorts(const void *a, const void *b) {
    return *(long long int *)a - *(long long int *)b;
}

int checkInExistNum(long long int existNum[], long long int num, int size_existNum, long long int *count_existNum) {
    for (int i = 0; i < size_existNum; i++) {
        if (existNum[i] == num) {
            count_existNum[i] += 1;
            return 1;
        };
    }
    return 0;
}

int main() {
    long long int T;
    scanf("%lld", &T); getchar();
    for (long long int l = 1; l <= T; l++) {
        long long int arr[25];
        long long int existNum[25];
		long long int *count_existNum = (long long int*)calloc(25, sizeof(long long int));
        long long int *answer = (long long int*)malloc(5 * sizeof(long long int));
        int count_answer = 0;
        int size_existNum = 0;
        for (int i = 0; i < 25; i++) {
            scanf("%lld", &arr[i]);
            getchar();
        }
        qsort(arr, 25, sizeof(long long int), sorts);
        for (int i = 0; i < 25; i++) {
            if (!checkInExistNum(existNum, arr[i], size_existNum, count_existNum)) {
                existNum[size_existNum] = arr[i];
                count_existNum[size_existNum] += 1;
                size_existNum++;
            }
        }
        for (int i = 0; i < 2 && count_answer < 5; i++) {
            int current_count = (int)sqrt(count_existNum[i * (size_existNum - 1)]);
            for (int j = count_answer; j < count_answer + current_count; j++) {
                answer[j] = existNum[i * (size_existNum - 1)] / 2;
            }
            count_answer += current_count;
        }
        for (int i = 1; i < size_existNum - 1 && count_answer < 5; i++) {
            if (!(count_existNum[i] & 1))
                continue;
            answer[count_answer] = existNum[i] / 2;
            count_answer++;
        }
        qsort(answer, 5, sizeof(long long int), sorts);
        printf("Case #%lld:", l);
        for (int i = 0; i < 5; i++) {
            printf(" %lld", answer[i]);
        }
        puts("");
    }
}
