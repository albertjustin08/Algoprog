#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Video {
    char title[1001];
    char artist[1001];
    int viewCount;
};

int compare(const void *a, const void *b) {
    struct Video *videoA = (struct Video *)a;
    struct Video *videoB = (struct Video *)b;

    if (videoA->viewCount != videoB->viewCount) {
        return videoB->viewCount - videoA->viewCount;
    } else {
        return strcmp(videoA->title, videoB->title);
    }
}

int main() {
    struct Video videos[101];
    int N = 0;
    int i;

    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    while (N < 101 && !feof(file)) {
        fscanf(file, "%[^#]#%[^#]#%d\n", videos[N].title, videos[N].artist, &videos[N].viewCount);
        N++;
    }
    fclose(file);

    qsort(videos, N, sizeof(struct Video), compare);

    for (i = 0; i < N; i++) {
        printf("%s by %s - %d\n", videos[i].title, videos[i].artist, videos[i].viewCount);
    }

    return 0;
}
