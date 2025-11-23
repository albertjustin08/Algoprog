#include <stdio.h>
#include <string.h>

struct Student {
    char name[15];
    int score;
};

void swap(struct Student *xp, struct Student *yp) {
    struct Student temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(struct Student arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j].score < arr[j + 1].score || (arr[j].score == arr[j + 1].score && strcmp(arr[j].name, arr[j + 1].name) > 0))
                swap(&arr[j], &arr[j + 1]);
}

int findRank(struct Student arr[], int n, char searchName[]) {
    bubbleSort(arr, n);
    int rank = 1;
    int i;
    for (i = 0; i < n; i++) {
        if (strcmp(arr[i].name, searchName) == 0) {
            return rank;
        }
        rank++;
    }
    return -1;
}

int main() {
    int T, t, i;
    scanf("%d", &T);

    for (t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        struct Student students[N];
        char buffer[20];

        for (i = 0; i < N; i++) {
            scanf("%s", buffer);
            sscanf(buffer, "%[^#]#%d", students[i].name, &students[i].score);
        }

        char searchName[15];
        scanf("%s", searchName);

        int rank = findRank(students, N, searchName);
        printf("Case #%d: %d\n", t, rank);
    }

    return 0;
}
